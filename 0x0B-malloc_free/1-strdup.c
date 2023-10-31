#include <stdio.h>
#include  <string.h>
#include <stdlib.h>

/**
 * _strdup-main
 * @str: string
 * Return: char
 */

char *_strdup(char *str)
{
	char *array;

	array = malloc(sizeof(strlen(str) + 1));
			
	strcpy(array, str);
			


	if (str == NULL)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}
	return (array);
}
