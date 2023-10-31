#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat-main
 * @s1: wel
 * @s2: wel
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
char *result;

result = (char *)malloc(strlen(s1) + strlen(s2) + 1);
if (result == NULL)
{
return (NULL);
}
if (result == NULL)
{
return (NULL);
}
if (result == NULL)
{
return (NULL);
}
strcpy(result, s1);
strcat(result, s2);

return (result);
}

