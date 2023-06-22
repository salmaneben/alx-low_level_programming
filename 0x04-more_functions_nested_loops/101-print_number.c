#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int qq;

	if (n < 0)
	{
		qq = -n;
		_putchar('-');
	} else
	{
		qq = n;
	}

	if (qq / 10)
	{
		print_number(qq / 10);
	}

	_putchar((qq % 10) + '0');
}
