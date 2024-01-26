#include <stdio.h>

/**
 * array_iterator-main
 * @array: array
 * @size: s
 * @action: func
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	 size_t i;



	for (i = 0;  i < size; i++)
	{
		action(array[i]);
	}
}
