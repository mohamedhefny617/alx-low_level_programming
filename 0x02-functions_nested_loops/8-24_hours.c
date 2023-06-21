#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of
 * starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int hoursH, minsM;

	for (hoursH = 0; hoursH <= 23; hoursH++)
	{
		for (minsM = 0; minsM <= 59; minsM++)
		{
			_putchar((hoursH / 10) + '0');
			_putchar((hoursH % 10) + '0');
			_putchar(':');
			_putchar((minsM / 10) + '0');
			_putchar((minsM % 10) + '0');
			_putchar('\n');
		}
	}
}

