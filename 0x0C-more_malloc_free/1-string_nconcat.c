#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat-main
 * @s1: s1
 * @s2: s2
 * @n: int
 * Return: c
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len;
	unsigned int s2_len;

	if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";
    
   s1_len = strlen(s1);
   s2_len = strlen(s2);

    if (n >= s2_len) {
        n = s2_len;
    }

    result = (char *)malloc(s1_len + n + 1);
    if (result == NULL)
    {
        return NULL; 
    }

    strcpy(result, s1);
    strncat(result, s2, n);

    return result;
}
