#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: no return
 */

void more_numbers(void)
{

int z, x;
	for (z = 1; z <= 10; z++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
			_putchar('1');
			_putchar(x % 10 + '0');
		}
			_putchar('\n');
		}
}
