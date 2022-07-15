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
