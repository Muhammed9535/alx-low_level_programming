#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - a function that prints the sum of the two diagonal
  * of a square matrix of integers
  * @size: size of the array
  * @a: name of array
  * Return: nothing
  */
void print_diagsums(int *a, int size)
{
	int i;
	int primary = 0;
	int secondary = 0;

	for (i = 0; i < size; i++)
	{
		primary += a[(i * size) + i];
		secondary += a[(i + 1) * size - (i + 1)];
	}
	printf("%d, %d", primary, secondary);
	printf("\n");
}
