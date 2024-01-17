#include "main.h"
#include <stdlib.h>

/**
  * _strdup - a function that returns a pointer to a newly allocated space
  * in memory,
  * which contains a copy of the string given as a parameter.
  * @str: string to duplicate
  * Return: copied string
  */
char *_strdup(char *str)
{
	unsigned int i;
	int len;
	char *array;

	len = 0;
	while (str[len])
	{
		len++;
	}

	array = malloc(sizeof(char) * len);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		array[i] = str[i];
	}
	return (array);
}
