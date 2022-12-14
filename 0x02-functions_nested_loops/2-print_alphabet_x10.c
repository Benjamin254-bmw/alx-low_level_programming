#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int round;
	char letter = 'a';

	round = 0;

	while (round < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	}
	_putchar('\n');

	round++;
}
