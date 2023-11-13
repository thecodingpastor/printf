#include "main.h"
/**
 * print_binary - prints binary to terminal
 * @number: takes number as a single param
 * Return: returns an integer
 */
int print_binary(unsigned int number)
{
	int chars_printed = 0;

	if (number > 1)
	{
		chars_printed += print_binary(num / 2);
	}
	_putchar('0' + num % 2);
	chars_printed++;
	return (chars_printed);
}
