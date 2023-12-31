#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: print the first 50 fibonacci numbers
  * start at 1 and 2 by folled by a new line
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", j);
		else if (i == 1)
			printf(", %ld", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}

		++i;
	}

	printf("\n");
	return (0);
}
