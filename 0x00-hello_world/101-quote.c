#include <stdio.h>
#include <unistd.h>

/**
 * main - Print Quote
 *
 * Description: prints Doras quote
 *
 * Return: 1 (Success)
 */

int main(void)
{
char *str;
int i;

str = "and that piece of art is useful\" - Dora Korpa, 2015-10-19";
for (i = 0; i < 58; i++)
{
	putchar(str[i]);
	putchar('\n');
	return (1);
}
