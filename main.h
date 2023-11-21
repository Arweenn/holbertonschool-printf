#ifndef MAIN_H
#define MAIN_H

/**
 * unistd.h - library for the function 'write'
 * stdlib.h - library for the functions 'malloc', 'free'
 * stdarg.h - library for the functions 'va_start',
 *      'va_end', 'va_arg', 'va_copy'
 */
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _puts(char *str);

int _printf(const char *format, ...);

#endif
