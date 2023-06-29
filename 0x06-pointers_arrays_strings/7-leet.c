#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int x, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[x] == a[j])
			{
				s[x] = b[x];
			}
		}
	}

	return (s);
}
