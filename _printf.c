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

	va_start(arguments, format);
	if (!format)
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if ((format[i] == 'c') || (format[i] == 's'))
				count += format[i] == 'c' ? _putchar(va_arg(arguments, int)) :
					print_str(va_arg(arguments, char *));
			else if (format[i] == '%')
					_putchar('%');
			else if ((format[i] == 'd') || (format[i] == 'i'))
				count += print_digit(va_arg(arguments, int));
			else
				count += print_else(format, i);
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
