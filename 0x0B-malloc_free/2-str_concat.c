#include "main.h"
#include <stdlib.h>
/**
  * str_concat - a function that concatenates two strings.
  * @s1: first string
  * @s2: second string
  * Return: pointer of the concatenates string
  */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, total, i, j;
	char *array;

	len1 = 0;
	while (s1[len1])
	{
		len1++;
	}

	len2 = 0;
	while (s2[len2])
	{
		len2++;
	}

	total = len1 + len2;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	array = malloc(sizeof(char) * total);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		array[i] = s1[i];
	}
	for (j = 0; s2[j]; j++)
	{
		array[i + j] = s2[j];
	}
	array[i + j] = '\0';
	return (array);
}
