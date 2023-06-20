#include "main.h"

/**
  * times_table - Prints the 9 times table
  *
  * Return: empty output
  */
void times_table(void)
{
	int row, col, prod, unit, dec;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			prod = row * col;

			if (prod > 9)
			{
				unit = prod % 10;
				dec = (prod - unit) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(dec + '0');
				_putchar(unit + '0');
			}
			else
			{
				if (col != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(prod + '0');
			}
		}

		_putchar('\n');
	}
}
