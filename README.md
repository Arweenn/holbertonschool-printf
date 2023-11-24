
# Printf Project - Holberton School

The `_printf()` function is a partial recreation of the C standard library function, printf. This project was made as part of the low-level programming track at Holberton School.


## Requirements

- The `_printf()` function was coded on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`

- All codes should be written in a Betty Style Documentation.

- All files should contain no more than five functions.

## Compilation

The compilation was possible via this gcc command and its following options :

    gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
    ./printf



## Usage/Examples

To use our `_printf()` function, we will use this `main.c` file as a test file :

    #include "main.h"

    /**
    * main - Entry point
    *
    * Return: Always 0
    */
    int main(void)
    {
    char *street = "Rue des Marchands";
    char *city = "Toulouse";
    char state = 'F';

    _printf("%d, %s, %s %c %i\n", 37, street, city, state, 31000);

    return (0);
    }


In order to test it in our local terminal, we compile it using the command seen above.

Following those steps, we should have this output :

    37, Rue des Marchands, Toulouse F 31000


## Files Description

Here is a little description of each file made in order to create our program :

- `main.c` : calls the printf function

- `_printf.c` : contains the source code of our function that is called in our main.c

- `_printformat.c` : match the conversion specifier with the right print function

- `_putchar.c` : prints a char

- `_printint.c` : prints an integer, positive or negative with decimals

- `_printcharstr.c` : prints a char or a string

- `_printperc.c` : handle the %% and prints a %

- `main.h` : our header file that contains a structure to match the right function with the conversion specifier and the prototypes


## Man page

The creation of our Man Page was possible following those steps :

- Create a vi text file named man_3_printf; 
- Find where the man pages are located in your terminal, for us it was :   

        /usr/share/man/

- Do a `cp` command to create the man in the correct folder :

        cp man_3_printf /usr/share/man/man1/man_3_printf.1
    
- Do a `gzip` command (a file compression and decompression tool) :

        gzip /usr/share/man/man1/man_3_printf.1

 - Do a `man man_3_printf` to execute and therefore open the man page :
        
        man man_3_printf

In this man page, we can find a description of our `_printf()` function, its return value and which options you can use, depending on what you intend to print. 



## Flowchart

![Image](https://github.com/Arweenn/holbertonschool-printf/blob/Arwen/Flowchart%20-%20_printf().png)


## Resources

In order to help us into completing our project, we searched for some resources, as :

- For the functions :
The file "Secrets of printf()", available on the porject's page

- For the man page :
A website about how to create it :

https://www.cyberciti.biz/faq/linux-unix-creating-a-manpage/

And another about how to organize and present it :

https://www.linuxhowtos.org/System/creatingman.htm

- For the Flowchart, we used the school's concept page :
    
https://intranet.hbtn.io/concepts/895



## Authors 

This READ ME file has been written by Dumont Arwen (Arweenn, on GitHub) and Pavaux Mathilde (mathpvx, on GitHub).

