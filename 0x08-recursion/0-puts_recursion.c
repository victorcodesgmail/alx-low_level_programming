#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion-main function
 * @s: array of char
 */
void _puts_recursion(char *s)
{
	while (*s == '\0')
	{
		putchar('\n');
	}
	putchar('s');
	_puts_recursion(s + 1);
}
