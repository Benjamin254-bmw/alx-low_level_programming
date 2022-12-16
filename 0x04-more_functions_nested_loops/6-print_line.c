#include "main.h"
/**
 * print_line - draws a straight line of _ n long
 * @n: lenght of line
 * Return: void
 */

void print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
