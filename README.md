
# Printf Project - Holberton School

The `_printf()` function is a partial recreation of the C standard library function, printf. This project was made as part of the low-level programming track at Holberton School.


## Requirements

The `_printf()` function was coded on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`


## Compilation

The compilation was possible via this gcc command and its following options :

    gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
    ./printf



## Usage of `_printf()` function

The function `_printf` writes output to standard output. The function writes under the control of a format string that specifies how subsequent arguments are converted for output.

Prototype: `int _printf(const char *format, ...);`


Return Value :

Upon successful return, `_printf` returns the number of characters printed (excluding the terminating null byte used to end output to strings). If an output error is encountered, the function returns -1.

Format of the Argument String :

The `format` string argument is a constant character string composed of zero or more directives :
- ordinary characters (not `%`) wich are copied unchanged to the output stream;
- conversions specifications, each of which results in fetching zero or more subsequent arguments.
Conversion specification is introduced by the character `%` and ends with a conversion specifier.


Conversion Specifiers :

The conversion specifier (introduced by the character `%`) is a character that specifies the type of conversion to be applied. The `_printf` function supports the following conversion specifiers:

- `d`: The `int` argument is converted to signed decimal notation.

Example `main.c`:	

	int main(void)
	{
    		_printf("%d\n", 7);
	}

Output :

    7


- `c`: The `int` argument is converted to an `unsigned char`.

Example `main.c`:

    	int main(void)
    	{
    		_printf("%c\n", 48);
    	}

Output :

    0


- `s`: The `const char *` argument is expected to be a pointer to a character array (aka. pointer to a string). Characters from the array are written starting from the first element of the array and ending at, but not including, the terminating null byte `\0`.

Example `main.c`:

    	int main(void)
    	{
    		_printf("%s\n", "Hello, World!");
    	}

Output :

    Hello, World!

- `%`: A `%` is written. No argument is converted. The complete conversion specification is `%%`.

Example `main.c`:

	int main(void)
	{
    		_printf("%%\n");
	}

Output :

    %


## Man page

Enter `man _printf`


## Testing

Test - (comment ? + exemples) + valgrind pour les failles mémoire…


## Flowcharts

Flowcharts
