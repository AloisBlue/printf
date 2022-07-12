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
	int i = 0, d, j;
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
				_putchar(va_arg(arguments, int));
				break;
			}
			case 's':
			{
				s = va_arg(arguments, char *);
				_puts(s);
				break;
			}
			case '%':
			{
				_putchar('%');
				break;
			}
			case 'd':
			{
				d = va_arg(arguments, int);
				if (d < 0)
				{
					d = (d * -1);
					_putchar('-');
				}
				_puts(_convert(d, 10));
				break;
			}
			case 'i':
			{
				j = va_arg(arguments, int);
				if (j < 0)
				{
					j = (j * -1);
					_putchar('-');
				}
				_puts(_convert(j, 10));
			}
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}

	va_end(arguments);
	return (i);
}
