#include "main.h"

/**
 * printformat - Function to search the specificateur
 * @type: The type is the char to be check on the struct specifier
 * @list: char from list
 * Return: count of charactere printed
 */
int printformat(const char type, va_list list)
{
	int j = 0;
	int count = 0;

	checker specifier[] = {
		{'c', printchar},
		{'s', printstr},
		{'%', printperc},
		{'d', printint},
		{'i', printint},
		{'\0', NULL}
	};
	while (specifier[j].type != '\0')
	{
		if (type == specifier[j].type)
		{
			count++;
			return (specifier[j].function(list));
		}
		j++;
	}
	_putchar('%');
	_putchar(type);
	count += 2;
	return (count);
}
