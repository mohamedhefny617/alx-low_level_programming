#include "main.h"

/**
 * times_table - Prints the ninth times table, starting with zero.
 */
void times_table(void)
{
	int number, multi, result;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');

		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');

			result = number * multi;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}

