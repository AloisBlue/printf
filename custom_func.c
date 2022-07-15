#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - writes a string
 * @str: pointer to str character
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (i < _strlen(str))
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _strlen - length of a string
 * @str: pointer to str char
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * *_convert - converts numbers to their base format
 * @num: number to be converted
 * @base: base format
 *
 * Return: Returns formated number
 */
char *_convert(unsigned int num, int base)
{
	static const char Rep[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = Rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}

/**
 * _intlen - count the length of a digit
 * @i: number to check for length
 *
 * Return: Returns length of the digit
 */
int _intlen(int i)
{
	int count = 0;

	do {
		count++;
		i /= 10;
	} while (i != 0);

	return (count);
}
