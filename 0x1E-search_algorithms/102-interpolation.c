#include "search_algos.h"

/**
* interpolation_search - using the interpolation search on an
* array sorted in ascending order
*
* @array: array to search
* @size: the size of the array
* @value: the value to check
*
* Return: index or -1
*/

int interpolation_search(int *array, size_t size, int value)
{
int h, l;
size_t pos;

if (array == NULL || size == 0)
	return (-1);

l = 0;
h = (int)size - 1;

do {
	pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));

	if (pos > size - 1)
	{
		printf("Value checked array[%d] is out of range\n", (int)pos);
		return (-1);
	}

	printf("Value checked array[%d] = [%d]\n", (int)pos, array[(int)pos]);
	if (array[(int)pos] == value)
		return (pos);
	else if (array[(int)pos] < value)
		l = (int)pos + 1;
	else
		h = pos - 1;
} while (l <= h && array[l] <= value && value <= array[h]);

return (-1);
}
