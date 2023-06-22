#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the numbers 1 - 100 w/
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of them
 *
 * Return: 0 secsuss
 */
int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if (k % 15 == 0)
			printf("FizzBuzz");
		else if (k % 3 == 0)
			printf("Fizz");
		else if (k % 5 == 0)
			printf("Buzz");
		else
			printf("%i", k);
		if (k < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
