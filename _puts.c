#include "main.h"

/**
 * _puts - prints a string
 * @str: is a char
 * Return: Always 0
 */

int _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return(i);
}
