#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

/**
 * struct checker - format handler
 * @type: type
 * @function: function
 * Description: check every specific format and add the fucntion to them
 */

typedef struct checker
{
	char type;
	int (*function)(va_list);
} checker;

int _putchar(char c);
int _printf(const char *format, ...);
int printchar(va_list list);
int printstr(va_list list);
int printperc(va_list list);
int printint(va_list list);
int printformat(char type, va_list list);
#endif
