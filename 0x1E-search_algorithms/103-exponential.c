#include "search_algos.h"

#define min(a, b) ((a) < (b) ? (a) : (b))

/**
* binary - searching for a value in an
* array sorted in ascending order using the binary
* search algorithm
*
* @array: array to search
* @left: start point
* @right: end point
* @value: value to find
*
* Return: index or -1 if not found
*/

int binary(int *array, int left, int right, int value)
{
int i, mid;

if (array == NULL)
	return (-1);

while (left <= right)
{
	i = left;
	mid = left + (right - left) / 2;
	printf("Searching in array: ");
	while (i <= right)
	{
		printf("%d", array[i]);
		if (i == right)
			printf("\n");
		else
			printf(", ");
		i++;
	}
	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		left = mid + 1;
	else
		right = mid - 1;
}

return (-1);
}


/**
* exponential_search - using exponential to find a value in
* a sorted array
*
* @array: array to search
* @size: the size of the array
* @value: value to find
*
* Return: index or -1
*/

int exponential_search(int *array, size_t size, int value)
{
int bound, start, end;

if (array == NULL || size == 0)
	return (-1);

bound = 1;
while (bound < (int)size && array[bound] <= value)
{
	printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
	bound *= 2;
}

start = bound / 2;
end = min(bound, (int)size - 1);
printf("Value found between indexes [%d] and [%d]\n", start, end);

return (binary(array, start, end, value));
}
