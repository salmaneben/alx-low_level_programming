#include <stdio.h>

#define MAX_INDEX 98

/**
 * main - prints first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0.
*/

int main(void)
{
	unsigned long int a1 = 1, a2 = 0, b1 = 2, b2 = 0, next1, next2;
	int count;

	printf("%lu, %lu, ", a1, b1);

	for (count = 3; count <= 98; count++)
	{
		next2 = a2 + b2;
		next1 = a1 + b1 + (next2 / 1000000000);
		next2 %= 1000000000;

		if (count != 98)
		{
			if (next2 > 0)
				printf("%lu%09lu, ", next1, next2);
			else
				printf("%lu, ", next1);
		}
		else
		{
			if (next2 > 0)
				printf("%lu%09lu\n", next1, next2);
			else
				printf("%lu\n", next1);
		}

		a1 = b1;
		a2 = b2;
		b1 = next1;
		b2 = next2;
	}

	return (0);
}
