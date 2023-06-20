#include <stdio.h>

#define MAX_INDEX 98

/**
 * main - prints first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long f1 = 1, f2 = 2, next;
	int count;

	printf("%lu, %lu, ", f1, f2);

	for (count = 3; count <= MAX_INDEX; count++)
	{
		next = f1 + f2;
		f1 = f2;
		f2 = next;

		if (count != MAX_INDEX)
			printf("%lu, ", next);
		else
			printf("%lu\n", next);
	}

	return (0);
}
