#include <stdio.h>
/**
 * main - print pairs of double digit combos
 *
 * Description: print pairs of double digit combos
 *
 *Return: 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b = 1; b <= 99; b++)
		{
			if (a < b && a != b)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');
				if (!(a == 98 && b == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	putchar(0);
}
