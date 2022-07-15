#include "main.h"

/**
 * _printf - produces output according to format
 * @format: character string composed of zero or more directives.
 *
 * Return: number of characters printed excluding the null byte
 *         used to end output to string.
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	int i = 0, count = 0;
	char *s;

	va_start(arguments, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
			{
				count += _putchar(va_arg(arguments, int));
				break;
			}
			case 's':
			{
				s = va_arg(arguments, char *);
				_puts(s);
				count += _strlen(s);
				break;
			}
			case '%':
			{
				count += _putchar('%');
				break;
			}
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}

	va_end(arguments);
	return (count);
}
