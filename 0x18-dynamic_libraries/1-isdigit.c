#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit 0 - 9
 * @c: int to be checked
 * Return: i if c is a digit otherwise 0
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
