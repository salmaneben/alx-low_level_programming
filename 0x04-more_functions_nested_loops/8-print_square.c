#include "main.h"

/**
 * print_square - prints a square of size
 * @size: size of the square
 *
 * Return: v
 */


void print_square(int size)
{
	int x, j;

	if (size <= 0)
		_putchar('\n');

	for (x = 0; x < size; x++)
	{
		for (j = 0; j < (size); j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
