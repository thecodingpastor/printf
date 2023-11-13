#include "main.h"
/**
 * handle_print - prints args 
 * @specifier: arg 1
 * @passed_params: arg 2
 * Return: an integer
 */
int handle_print(char spec, va_list passed_params)
{
	if (spec == 'c')
		return (_putchar(va_arg(passed_params, int)));
	else if (spec == 's')
		return (print_string(va_arg(passed_params, char *)));
	else if (spec == '%')
		return (_putchar('%'));
	else if (spec == 'd')
		return (print_num(va_arg(passed_params, int)));
	else if (spec == 'i')
		return (print_num(va_arg(passed_params, int)));
	else if (spec == 'b')
		return (print_binary(va_arg(passed_params, int)));
	else if (spec == 'x')
		return (print_hexa(va_arg(passed_params, unsigned int), 0));
	else if (spec == 'X')
		return (print_hex(va_arg(passed_params, unsigned int), 1));
	else if (spec == 'u')
		return (print_unsigned_int(va_arg(passed_params, unsigned int)));
	else if (spec == 'o')
		return (print_octal(va_arg(passed_params, unsigned int)));
	else if (spec == 'r')
		return (printRev(va_arg(passedParams, char *)));
	else if (specifier == 'p')
		return (printPointer(va_arg(passedParams, char *)));
	_putchar('%'), _putchar(specifier);
	return (2);
}
