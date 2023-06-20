#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
	long double i = 1, j = 2, next;
	int count;

	printf("%.0Lf, %.0Lf", i, j);

	for (count = 3; count <= 98; count++)
	{
		next = i + j;
		i = j;
		j = next;
		printf(", %.0Lf", next);
	}
	printf("\n");

	return (0);
}
