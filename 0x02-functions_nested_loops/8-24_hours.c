#include "main.h"
/**
 * jack_bauer -prints every minute of the day starting from 00:00 to 23:59
 *
 * Description: prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
	{
		int h, m;


		for
		h = 0;
		h <= 23;
		h++;

		{
			for (m = 0; m <= 59)
			{
				_putchar ((h / 10) + '0');
				_putchar ((h % 10) + '0');
				_putchar (':');
				_putchar ((m / 10) + '0');
				_putchar ((m % 10) + '0');
				_putchar ('\n');
			}
		}
	}
