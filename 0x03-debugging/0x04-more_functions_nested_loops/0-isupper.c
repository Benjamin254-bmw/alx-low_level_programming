#include "main.h"
/**
 * _issupper - checks for uppercase
 *
 * @c: character to check for case
 *
 *Return: 1 if uppercase, 0 if not
 */

int _issupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
