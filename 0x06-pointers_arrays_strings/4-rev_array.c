#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x = 0;
	int y = n - 1;
	int tmp;

	while (x < y)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y] = tmp;
		x++;
		y--;
	}
}
