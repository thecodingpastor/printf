#include "main.h"
/**
 * print_octal - prints octal
 * @num: params
 * Return: returns int
 */

int print_octal(unsigned int num)
{
	int chars_printed = 0;

	if (num > 7)
	{
		chars_printed += print_octal(num / 8);
	}
	_putchar('0' + num % 8);
	chars_printed++;
	return (chars_printed);
}
