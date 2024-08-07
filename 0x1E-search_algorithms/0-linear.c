#include "search_algos.h"
/**
 * linear_search - it searches for a value in an array
 * of integers using the Linear search algorithm
 *
 * @array: the input array
 * @size: the size of the array
 * @value: the value to search in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
