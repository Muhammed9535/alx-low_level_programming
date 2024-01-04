#include "main.h"
#include <stdio.h>
/**
  * reverse_array - a function that reverses the content of an array
  * of integers
  * @a: an array of integers
  * @n: the number of elements to swap
  */
void reverse_array(int *a, int n)
{
	int i, c, j;

	c = n - 1;
	for (i = 0; i < n / 2 ; i++)
	{
		j = a[i];
		a[i] = a[c];
		a[c--] = j;
	}
}
