#include "main.h"

/**
  * jack_bauer - Prints every minute of the day
  *
  * Return: ..
  */
void jack_bauer(void)
{
	int z, b, x, d;

	for (z = 0; z <= 2; z++)
	{
		for (b = 0; b <= 9; b++)
		{
			if ((z <= 1 && b <= 9) || (z <= 2 && b <= 3))
			{
				for (x = 0; x <= 5; x++)
				{
					for (d = 0; d <= 9; d++)
					{
						_putchar(z + '0');
						_putchar(b + '0');
						_putchar(58);
						_putchar(x + '0');
						_putchar(d + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
