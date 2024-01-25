#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all -  a function that returns the sum of all its parameters.
  * @n: number of argument
  * Return: the sum
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int x, sum = 0;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(arg, int);
		sum += x;
	}
	va_end(arg);
	return (sum);
}

