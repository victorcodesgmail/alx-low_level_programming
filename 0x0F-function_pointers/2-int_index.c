#include <stdio.h>

/**
 * int_index - fun
 * @array: arra
 * @size: size of int
 * @cmd: function
 * Return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for ( i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return -1;
}
