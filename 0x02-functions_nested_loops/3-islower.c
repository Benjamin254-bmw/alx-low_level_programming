#include "main.h"
/**
 *test_islower -checks for lowercase
 *
 * @c: c is an ASCII character
 *
 * Return:1 if lowercase. Otherwise 0
 */
int test_islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
