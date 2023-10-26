#include <stdio.h>
#include "main.h"

/**
 * factorial-prints factorial 
 * @n: n
 * Return: 1
 */

int factorial(int n)
{
	int i, f;
	if (n <= 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (1);
	}
	for (i = 2 ; i <= n; i++)
	{
		f *=i;
	}

	return (f);

}
