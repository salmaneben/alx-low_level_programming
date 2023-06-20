#include "main.h"

/**
  * print_last_digit - Prints the last digit of a number
  * @x: The number to be input
  *
  * Return: last digit of number
  */
int print_last_digit(int x)
{
	int last;

	last = x % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);
}
