#include "main.h"

/**
 * rot13 - encodes a string.
 * @str: char to encode
 *
 * Return: string encoded
 */

char *rot13(char *str)
{
	int i, j;

	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char data2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == data1[j])
			{
				str[i] = data2[j];
				break;
			}
		}
	}
	return (str);
}
