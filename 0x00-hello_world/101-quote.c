#include <stdio.h>

#include <unistd.h>



/**
 * main - Entry point
 *
 *   print a string
 *
 *   Return: 1 on success.
 *
 */



int main(void)

{
		char *str;
			int i;
	str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	for (i = 0; i < 58; i++)
		{
		putchar(str[i]);
		}
			putchar('\n');
			return (1);

}
