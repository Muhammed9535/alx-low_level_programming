#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - a function that execute a function
  * @size: size of array
  * @action: funtion pointer
  * @array: name of array
  * Return: Nothingg
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}

