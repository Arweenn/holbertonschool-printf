#include "main.h"
/**
 * printint - prints a negative or positive int
 * @args: next argument that takes the values of the int
 * Return: number of character
 */
int printint(va_list args)
{
	long int num = va_arg(args, int);
	long int absolutenum = 0;
	long int tempnum = 0;
	long int numberofdigit = 1;
	int count = 0;

	if (num < 0)
	{
		absolutenum = (num * -1);
		_putchar('-');
		count++;
	}
	else
	{
		absolutenum = num;
	}

	tempnum = absolutenum;

	while (tempnum >= 10)
	{
		tempnum = tempnum / 10;
		numberofdigit = numberofdigit * 10;
	}
	while (numberofdigit >= 1)
	{
		_putchar(((absolutenum / numberofdigit) % 10) + '0');
		numberofdigit = numberofdigit / 10;
		count++;
	}

	return (count);
}
