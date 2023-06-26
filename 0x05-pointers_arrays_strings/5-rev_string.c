#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i, c;
	char *start, *end, aux;

	start = s;
	end = s;

	while (*end != '\0')
	{
		end++;
	}

	for (c = 0; c < (end - start) / 2; c++)
	{
		aux = *(start + c);
		*(start + c) = *(end - 1 - c);
		*(end - 1 - c) = aux;
	}
}

