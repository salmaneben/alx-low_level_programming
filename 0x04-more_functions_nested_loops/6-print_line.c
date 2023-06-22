#include "main.h"

/**
 * print_line - printing lines
 * @n: number of times
 *
 * Return: void
 */


void print_line(int n)
{
	int h;

	for (h = 0; h < n; h++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
