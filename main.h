#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * our own putchar function
 */
int _putchar(char c);

/**
 * function pointer type for conversion specifier functions
 */
typedef void (*convfunction)(va_list *args);

/**
 * structure to map conversion specifiers to their corresponding functions
 */
typedef struct
{
	char specifier;
	convfunction function;
} convinfo;

/**
 * function prototypes
 */
void printChar(va_list *args);
void printString(va_list *args);
void printInt(va_list *args);
void printPercent(va_list *args);

/**
 * printf function, returns the number of char printed
 */
int _printf(const char *format, ...);

#endif /* MAIN_H */
