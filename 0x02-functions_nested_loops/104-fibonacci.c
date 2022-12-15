#include <stdio.h>
/**
 *main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 *Return: Void
 *
 */

int main(void)
{
	int count;
	unsigned long i, j, k;
	unsigned long m, n, p, carry;

	n = 0;
	i = 0;
	j = 1;

	for (count i = 1; count i <= 91; count++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu, ", k)
	}
	m = i % 1000;
	i = i / 1000;
	n = j % 1000;
	j = j / 1000;
	while (count <= 98)
	{
		carry = (m + n) / 1000;
		p = (m + n) - carry % 1000;
		k = (i + j) + carry;
		m = n;
		n = p;
		i = j;
		j = k;
		if (p >= 100)
			printf("%lu%lu", k, p);
			else
				printf("%lu0%lu", k, p);
			if (count != 98)
				printf(", ");

			count++;
	}
	printf('\n');
	return (0);
}
