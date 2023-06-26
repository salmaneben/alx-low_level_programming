#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random passwords for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}

	putchar('\n');
	return (0);
}
