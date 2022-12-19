#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	while (j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
