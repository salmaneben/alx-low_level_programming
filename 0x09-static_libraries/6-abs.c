#include "main.h"

/**
  * _abs - Returns absolute value of an integer.
  * @d: Input integer.
  *
  * Return: Absolute value of @c.
  */

int _abs(int d)
{
	if (d < 0)
	{
		int abs_val;

		abs_val = d * -1;

		return (abs_val);
	}

	return (d);
}
