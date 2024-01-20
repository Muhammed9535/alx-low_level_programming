#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _calloc - a function that allocates memory for an array, using malloc.
  * @nmemb:  function allocates memory for an array of nmemb
  * @size: number of byte
  * Return: Null if funtion fails
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	filler = array;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';
	return (array);
}
