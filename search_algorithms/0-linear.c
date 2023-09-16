#include "search_algos.h"

int
linear_search(int *array, size_t size, int value)
{
	unsigned long int i = 0;

	if (!array)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i] && value > 0)
		{
			return (i);
		}
	}
	return (-1);
}
