#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked-main
 * @b: b
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *number;

	number = malloc(b);
	if (number == 0)
	{
		exit(98);
	}
	return (number);
}


