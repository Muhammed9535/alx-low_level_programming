#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * malloc_checked -  a function that allocates memory using malloc
  * @b: size of memory
  * Return: nothing
  */
void *malloc_checked(unsigned int b)
{
	int *array;

	array = malloc(b);
	if (array == NULL)
	{
		exit(98);
	}
	return (array);
}
