#include "search_algos.h"

void
printArr(int *array, int i, int fin)
{
	int iterator;

	printf("Searching in array: ");
	for (iterator = i; iterator <= fin; iterator++)
	{
		if (iterator > i)
			printf(", ");
		printf("%i", array[iterator]);
	}
	printf("\n");
}

int
binary_search(int *array, size_t size, int value)
{
	int i = 0, fin = size - 1, mid = 0;

	if (!array)
	{
		return (-1);
	}

	while (i <= fin)
	{
		printArr(array, i, fin);
		mid = (i + fin) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			i = mid + 1;
		}
		else
		{
			fin = mid - 1;
		}
	}
	return (-1);
}
