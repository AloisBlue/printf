#include "main.h"

/**
 * print_str - print a string and return it's length
 * @str: Pointer to the string
 *
 * Return: length of the string
 * Description - this function prints a string
 */
int print_str(char *str)
{
	if (str == (char *)0)
		str = "(null)";
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

/**
 * print_else - print values if no format detected
 * @format: the string
 * @i: string position
 *
 * Return: length of values available
 */
int print_else(const char *format, int i)
{
	int count = 0;

	if (format[i])
	{
		count += _putchar(format[i - 1]);
		count += _putchar(format[i]);
	}
	return (count);
}

/**
 * print_sign - prints sign if converter is sign
 * @format: string to print
 * @i: string position
 *
 * Return: length of characters
 */
int print_sign(const char *format, int i)
{
	int count = 0;

	if (format[i - 1] == '%')
		count += _putchar('%');
	count += _putchar('%');

	return (count);
}
