#include "main.h"

/**
*print_most_numbers - prints
* owned by Bwave ICT
*Return: void
*/

void print_most_numbers(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
	if (!(d == '2' || d == '4'))
	_putchar(d);
	}
	_putchar('\n');
}
