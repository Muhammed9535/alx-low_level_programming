#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
  * print_numbers -  a function that prints numbers
  * @separator: comma use to seperatee
  * @n: number of argument
  * Return: number passed
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list arg;
	int x;
	unsigned int i, c;

	c = n - 1;
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(arg, int);
		printf("%d", x);
		if (i == c)
			continue;
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
