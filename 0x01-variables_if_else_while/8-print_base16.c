#include <stdio.h>
/*
 **
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet except e, q
 *
 * Retirn: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 48)
	{
		if (i < 10)
			putchar (i + '0');
		else if (ii > 41)
			putchar (i - 10 + 'A');
		i++;
	}
	putchar (10);

	return (0);
}
