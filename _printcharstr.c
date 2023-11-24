#include "main.h"
/**
 * printchar - function that prints a char
 * @args: list of arguments which the char comes from
 * Return: number of characters
 * printstr - function that prints a string
 */

int printchar(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar (c));
}

int printstr(va_list args)
{
	int i = 0;
	int count = 0;
	char *str = va_arg(args, char*);

	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
}
