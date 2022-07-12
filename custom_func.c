#include "main.h"

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
 * @str: pointer to str char
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str);
	}
	_putchar('\0');
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
char *_convert(unsigned num, int base)
{
	static char Rep[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = Rep[num%base];
		num /= base;
	}
	while (num != 0)

	return (ptr);
}
