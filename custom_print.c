#include "main.h"

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
		_putchar('-');
		count += 1;
	}
	_puts(_convert(i, 10));
	count += _intlen(i);
	return (count);
}
