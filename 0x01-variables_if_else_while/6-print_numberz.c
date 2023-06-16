#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 9 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/* convert digit to ascii */
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
