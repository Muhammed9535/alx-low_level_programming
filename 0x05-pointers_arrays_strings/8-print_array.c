#include "main.h"
/**
  * print_array - a function that prints n elements of an array of integers
  * @a: aray to check
  * @n: no of element
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);
		_putchar(' ');
		_putchar(',');
	}
}
