#include "main.h"
/**
 *test_islower -checks for lowercase
 *
 * @c: c is an ASCII character to be input
 *
 * Return:1 if lowercase. Otherwise 0
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
