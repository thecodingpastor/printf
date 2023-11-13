#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be reversed
 * Return: an integer
 */

int print_rev(char *s)
{
	int i = 0;

	const char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (end >= s)
	{
		_putchar(*end);
		end--, i++;
	}
	return (i);
}
