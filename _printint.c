#include "main.h"
/**
 * print_number - function that prints the number neg. or pos. with digit
 * @list: list the value of the number
 * Return: number of character
 */
int printint(va_list list)
{
	long int num = va_arg(list, int);
	long int absolutenumber = 0;
	long int tempnumber = 0;
	long int digitposition = 1;
	int count = 0;

	if (num < 0)
	{
		absolutenumber = (num * -1);
		_putchar('-');
		count++;
	}
	else
	{
		absolutenumber = num;
	}

	tempnumber = absolutenumber;

	while (tempnumber > 9)
	{
		tempnumber = tempnumber / 10;
		digitposition = digitposition * 10;
	}
	while (digitposition >= 1)
	{
		_putchar(((absolutenumber / digitposition) % 10) + '0');
		digitposition = digitposition / 10;
		count++;
	}

	return (count);
}
