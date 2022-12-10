#include <stdlib.h>
#include <stdio.h>

/**
 * main -prints sing;e digit numbers
 *
 *  Description: print single digit numbers
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char *str = "0123456789";

	for (num = 0 ; num <= 9 ; num++)
	{
		putchar(str[num]);
	}
	 putchar('\n');

	return (0);
}

