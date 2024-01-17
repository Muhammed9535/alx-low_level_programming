#include "main.h"
#include <stdlib.h>
/**
  * strtow -  a function that splits a string into words
  * @str: pointer to string to split into words
  * Return: pointer to character
  */
char **strtow(char *str)
{
	char *array, len, len1;
	int i; j;

	len = 0;
	while(str[len])
	{
		len++;
	}
	len1 = len - 1;
	if (str == NULL || str == "")
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * len1);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		for(j = 0; str[i][j]; j++)
		{

			if (str[i] == " ")
				continue;
			array[i] = str[i];
		}
	}
	return (array);
}
