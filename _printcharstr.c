#include "main.h"
/**
 * print_char - function that prints the char from the list
 * @list: list to choose the character
 * Return: number of characters
 * print_string - function that prints a string
 */

int printchar(va_list list)
{
	char c = va_arg(list, int);

	return (_putchar (c));
}

int printstr(va_list list)
{
	int i = 0;
	int count = 0;
	char *str = va_arg(list, char*);

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
