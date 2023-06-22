#include "main.h"

/**
*print_numbers - print 0123456789
* owned by Bwave ICT
*Return: void
*/

void print_numbers(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
	_putchar(d);
	}
	_putchar('\n');
}
