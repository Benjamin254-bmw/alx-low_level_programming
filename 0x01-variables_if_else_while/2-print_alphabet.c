#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Desciption: print thr letters of the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}

