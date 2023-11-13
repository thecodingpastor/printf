#include "main.h"
/**
 * print_num - prints numbers
 * @num: number to be printed
 * Return: number of digits printed
 */
int print_num(int num)
{
	int i = 0;
	int digits = 0;

	if (!num)
		return (-1);
	if (num < 0)
	{
		_putchar('-');
		num = -num, digits++;
	}
	if (num == 0)
		_putchar('0'), digits++;
	else
	{
		int temp = num;
		char buffer[20];
		int index = 0;

		while (temp > 0)
		{
			int digit = temp % 10;

			buffer[index] = '0' + digit;
			temp /= 10, index++, digits++;
		}
		for (i = index - 1; i >= 0; i--)
			_putchar(buffer[i]);
	}
	return (digits);
}
