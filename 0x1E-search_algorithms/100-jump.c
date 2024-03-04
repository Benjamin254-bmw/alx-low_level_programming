#include "search_algos.h"

/**
* jump_search - implementing a jump search
* algorithm in a sorted list
*
* @array: array to search
* @size: size of the array
* @value: value to locate
*
* Return: index or -1
*/

int jump_search(int *array, size_t size, int value)
{
	int step, index, prev;

	if (array == NULL || size == 0)
		return (-1);

	step = (int)sqrt(size);
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);

		prev = index;
		index += step;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
