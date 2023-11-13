#include "main.h"
/**
 * _printf - mimics the standard printf function
 * @format: format specifier
 * Return: count of characters printed
 */
int _printf(const char *format, ...)
{
	va_list passed_params;
	int i, total_char = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(passed_params, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			if (format[i] == '!')
				_putchar('%'), _putchar('!'), total_char += 2;
			else
				total_char += handle_print(format[i], passed_params);
		}
		else
			total_char += _putchar(format[i]);
	}
	va_end(passed_params);
	return (total_char);
}
