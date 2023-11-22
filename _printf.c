#include "main.h"
#include <stddef.h>
/**
 * _printf - produces output according to a format
 * @format: the first argument
 * Return: the number of char
 */
int _printf(const char *format, ...)
{
	int charCount;
	size_t i;
	va_list args;
	convinfo convtable[] = {
		{'c', printChar},
		{'s', printString},
		{'d', printInt},
		{'i', printInt},
		{'%', printPercent},
	};
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			for (i = 0; i < sizeof(convtable) / sizeof(convtable[0]); i++)
			{
				if (*format == convtable[i].specifier)
				{
					convtable[i].function(&args);
					break;
				}
			}
		}
		else
			charCount += _putchar(*format);
		format++;
	}
	va_end(args);
	return (charCount);
}
