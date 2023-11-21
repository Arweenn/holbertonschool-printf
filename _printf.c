#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: the lenght of the input or -1 if error
 */
int _printf(const char *format, ...)
{
	unsigned int i, nbr, str_nbr;

	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0')) 
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);

		else if(format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
		}
		else if(format[i + 1] == 's')
		{
			str_nbr = _puts(va_arg(args, char *));
			i++;
			nbr += (str_nbr - 1);
		}
		else if(format[i + 1] == '%')
			_putchar('%');
		nbr += 1;
	}
	va_end(args);
	return(nbr);
}
