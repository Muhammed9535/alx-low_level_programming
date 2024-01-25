#include <stdio.h>
#include "function_pointers.h"
/**
  * int_index - a function that searches for an integer.
  * @size: size of array
  * @array: name of array
  * @cmp: function pointer
  * Return: -1 if no element matches, return -1 if size <= 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
