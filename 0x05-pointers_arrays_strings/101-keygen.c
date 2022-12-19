#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - the program generate a 9 digits of random number as password
 * @n: a random number
 * @sum: a array of floor string that cover all alphabet character.
 * @i: a char array index.
 * Return: return 0
 */

int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = '0';

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
