#include <stdlib.h>
#include <stdio.h>

/**
 * main - print triple combos
 *
 * Description: print triple digit combos
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, c;

	for (a = '0' ; a <= '7' ;)
	{
		for (b = '0' ; b <= '8' ;)
		{
			for (c = '0' ; c <= '9' ; )
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (!(a == '7' && b == '8' && c == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
		b++;
	}
	a++;
}
putchar('\n');

return (0);
}
