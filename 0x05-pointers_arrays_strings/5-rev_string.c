#include "main.h"
/**
 * re_string - reverses a string
 * @s: pounter to point to char
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;

	char temp;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	j--;

	for (i = 0; j > i; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}
}
