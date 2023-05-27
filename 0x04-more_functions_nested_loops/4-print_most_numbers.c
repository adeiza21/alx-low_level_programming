#include "main.h"

/**
 * df
 * d
 * d
 * f fdd
 */

void print_most_numbers(void)
{
	int j;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i);
	}
	_putchar("\n");
}
