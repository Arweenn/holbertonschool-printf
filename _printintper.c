#include "main.h"
/**
 * printInt - prints an integer
 * @args: arguments
 */
void printInt(va_list *args)
{
	int num = va_arg(*args, int);
	int reversed;
	/**
	 * convert integer to string and print each character
	 * this conversion can be implemented separately
	 * for simplicity, we assume a positive integer here
	 */
	reversed = 0;

	if (num == 0)
	{
		_putchar('0');
		return;
	}
	while (num > 0)
	{
		reversed = reversed * 10 + num % 10;
		num /= 10;
	}
	while (reversed > 0)
	{
		_putchar((reversed % 10) + '0');
		reversed /= 10;
	}
}
/**
 * printPercent - prints a percent
 * @args: arguments
 * __attribute__((unused)): mark the parameter as unused here
 */
void printPercent(va_list *args __attribute__((unused)))
{
	_putchar('%');
}
