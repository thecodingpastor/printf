#include "main.h"
/**
 * print_string - prints strings
 * @str: string to print
 * Return: length of string
 */
int print_string(const char *str)
{
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		if (str[i] == '!')
			_putchar('%'), _putchar('!'), i += 2;
		else
			_putchar(str[i]), i++;
	}
	return (i);
}
