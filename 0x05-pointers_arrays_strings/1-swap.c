#include "main.h"
/**
  * swap_int - a function that swaps the values of two integers
  * @a: first parameter to print
  * @b: second parameter to print
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
