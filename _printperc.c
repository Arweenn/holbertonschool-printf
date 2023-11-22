#include "main.h"
/**
 * print_percent - function that handle the case %%
 * @list: list to recognize the case
 * Return: number of characters
 */
int printperc(va_list __attribute__((unused)) list)
{
        _putchar('%');
        return (1);
}
