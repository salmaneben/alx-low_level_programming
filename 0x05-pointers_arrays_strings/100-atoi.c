#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int z, d, n, len, f, digit;

	z = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (z < len && f == 0)
	{
		if (s[z] == '-')
			++d;

		if (s[z] >= '0' && s[z] <= '9')
		{
			digit = s[z] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[z + 1] < '0' || s[z + 1] > '9')
				break;
			f = 0;
		}
		z++;
	}

	if (f == 0)
		return (0);

	return (n);
}
