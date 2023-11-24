#include "main.h"

/**
 * printformat - match the specifier with the right print function
 * @type: char to check
 * @args: next argument containing the value to asset to the char
 * Return: number of characters printed
 */
int printformat(const char type, va_list args)
{
	int i = 0;

	checker specifier[] = {
		{'c', printchar},
		{'s', printstr},
		{'%', printperc},
		{'d', printint},
		{'i', printint},
		{'\0', NULL}
	};
	while (specifier[i].type != '\0')
	{
		if (type == specifier[i].type)
		{
			return (specifier[i].function(args));
		}
		i++;
	}
	_putchar('%');
	_putchar(type);
	return (2);
}
