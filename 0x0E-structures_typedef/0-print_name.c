#include <stdio.h>


/**
 *print_name-name print
 *@name: name
 *@f: function
 */



void print_name(char *name, void (*f)(char *))
{

f(name);
}
