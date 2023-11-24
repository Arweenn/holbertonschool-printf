#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

/**
 * struct checker - format handler
 * @type: char representing a datatype
 * @function: pointer to function to print according to a specific datatype
 *
 * Description: check every specific format and add the fucntion to them
 */
typedef struct checker
{
	char type;
	int (*function)(va_list);
} checker;

/**
 * _putchar - prints a char
 * @c: char
 * Return: count of byte
 */
int _putchar(char c);
int _printf(const char *format, ...);
int printchar(va_list list);
int printstr(va_list list);
int printperc(va_list list);
int printint(va_list list);
int printformat(char type, va_list list);
#endif /**MAIN_H*/
