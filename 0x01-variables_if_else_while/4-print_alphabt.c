#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the alphabet in lowercase, except for 'q' and 'e'
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'd')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
