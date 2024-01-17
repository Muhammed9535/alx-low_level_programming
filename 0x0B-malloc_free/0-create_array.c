#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * create_array -  a function that creates an array of chars, and
  * initializes itwith a specific char.
  * @size: number of elelment
  * @c: character to initialize to
  * Return: Null if size = 0, Returns a pointer to the array, or NULL
  * if it fails
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
