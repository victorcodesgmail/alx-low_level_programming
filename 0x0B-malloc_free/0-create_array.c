#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array-create 
 * @size
 * @char: c
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(size  * sizeof(char));
	for (i = 0; i < size; i++)
	{
	array[i] = c;
	}
return (array);

}
