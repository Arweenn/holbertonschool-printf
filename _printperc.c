#include "main.h"
/**
 * print_percent - prints % if encounters %%
 * @args: list of arguments unused in the body
 * Return: number of characters
 */
int printperc(va_list __attribute__((unused)) args)
{
	_putchar('%');
	return (1);
}
