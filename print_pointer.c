#include "main.h"
/**
 * print_pointer - prints a pointer
 * @ptr: pointer to be printed
 * Return: charater count
 */
int print_pointer(const void *ptr)
{
	unsigned long num = (unsigned long)ptr;
	int total_chars = 0;

	if (ptr == NULL)
		return (print_string("(nil)"));

	_putchar('0'), _putchar('x'), total_chars += 2;
	if (num == 0)
		_putchar('0'), total_chars++;
	else
	{
		char hex_chars[16] = "0123456789abcdef";
		char hex_buffer[16];
		int i = 0;

		while (num > 0)
		{
			hex_buffer[i++] = hex_chars[num % 16];
			num /= 16;
		}
		while (i > 0)
			_putchar(hex_buffer[--i]), total_chars++;
	}
	return (total_chars);
}
