#include "main.h"
#include <stdio.h>
/**
 * print_str = print a string and return it's length
 * @str: Pointer to the string
 *
 * Return: length of the string
 */
int print_str(char *str)
{
	_puts(str);
	return (_strlen(str));
}


/**
 * print_digit - prints a number
 * @i: number to be printed
 *
 * Return: length of number 
 */
int print_digit(int i)
{
        int count = 0;
	
	if (i < 0)
	{
		i = (i * -1);
		putchar('-');
		count += 1;			
	}

	printf("%d\n", i);
	count += _intlen(i);
	return (count);
}
