#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int loopCounter;
	unsigned long fibNum1 = 0, fibNum2 = 1, fibSum;
	unsigned long fibNum1_half1, fibNum1_half2, fibNum2_half1, fibNum2_half2;
	unsigned long halfSum1, halfSum2;

	for (loopCounter = 0; loopCounter < 92; loopCounter++)
	{
		fibSum = fibNum1 + fibNum2;
		printf("%lu, ", fibSum);

		fibNum1 = fibNum2;
		fibNum2 = fibSum;
	}

	fibNum1_half1 = fibNum1 / 10000000000;
	fibNum2_half1 = fibNum2 / 10000000000;
	fibNum1_half2 = fibNum1 % 10000000000;
	fibNum2_half2 = fibNum2 % 10000000000;

	for (loopCounter = 93; loopCounter < 99; loopCounter++)
	{
		halfSum1 = fibNum1_half1 + fibNum2_half1;
		halfSum2 = fibNum1_half2 + fibNum2_half2;
		if (fibNum1_half2 + fibNum2_half2 > 9999999999)
		{
			halfSum1 += 1;
			halfSum2 %= 10000000000;
		}

		printf("%lu%lu", halfSum1, halfSum2);
		if (loopCounter != 98)
			printf(", ");

		fibNum1_half1 = fibNum2_half1;
		fibNum1_half2 = fibNum2_half2;
		fibNum2_half1 = halfSum1;
		fibNum2_half2 = halfSum2;
	}
	printf("\n");
	return (0);
}
