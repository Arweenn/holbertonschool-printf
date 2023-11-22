#include "main.h"
/**
 * printChar - prints a char
 * @args: arguments
 * implementation of conversion specifier functions
 */
void printChar(va_list *args)
{
	char c = va_arg(*args, int);

	_putchar(c);
}
/**
 * printString - prints a string
 * @args: arguments
 */
void printString(va_list *args)
{
	const char *s = va_arg(*args, const char*);

	while (*s)
	{
		_putchar(*s);
		s++;
	}
}
