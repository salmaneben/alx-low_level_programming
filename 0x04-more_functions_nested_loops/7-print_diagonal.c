#include "main.h"

/**
 * print_diagonal - printing lines diagonal
 * @n: input variable
 *
 * Return: void
 */


void print_diagonal(int n)
{
	int dd, dev;

	if (n <= 0)
		_putchar('\n');
	for (dd = 0; dd < n; dd++)
	{
		for (dev = 0; dev < dd; dev++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
