#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked-main
 * @b: b
 */
void *malloc_checked(unsigned int b)
{
	void *number;

	number = malloc(sizeof(b));
	if (number == 0)
	{
		exit(98);
	}
	else
	{
		return (number);
	}
	return (0);
}
