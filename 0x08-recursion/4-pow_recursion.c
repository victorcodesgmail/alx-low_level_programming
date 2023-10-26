#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion-main
 * @x: int
 * @y: int
 * return (0);
 */
int _pow_recursion(int x, int y)
{
	int f, i;
	if (y < 0)
	{
		return (-1);
	}

	for (i = 1; i <= y; i++)
	{
		f = x * x;
		f *= x;
		return (f);
	}
	return (0);
}
