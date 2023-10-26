#include <stdio.h>
#include "main.h"


/**
 * _print_rev_recursion:- prints a string in reverse
 * @s: pointer to array of strings
 */

void _print_rev_recursion(char *s)
{
	putchar(*s[-1]);
	_puts_recursion(s + 1);
	return;
}
