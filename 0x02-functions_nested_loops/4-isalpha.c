#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: c is an ASCII character
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
