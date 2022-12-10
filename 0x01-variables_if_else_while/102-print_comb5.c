#include <stdio.h>
/**
 * main - Entry point, Prints all possible combinations of a pair of two digit numbers, without any repetition
 *
 * Description: numbers should range from 0 to 99
 *
 * Return: Always 0 (Success)
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
return (0);
}
