#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i, c, w;
	char *a, zero;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (w = 1; w < c; w++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		zero = s[i];
		s[i] = *a;
		*a = zero;
		a--;
	}
}
