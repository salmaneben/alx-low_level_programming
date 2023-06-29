#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, x;

	x = 0;
	x = 0;

	while (dest[i] != '\0')
		i++;

	while (src[x] != '\0')
	{
		dest[i] = src[x];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
