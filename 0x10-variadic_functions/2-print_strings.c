#include  "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_strings - a function that prints strings, followed by a new line.
  * @separator: comma to seperate
  * @n: nuber of argument
  * Return: int
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, c;
	char *x;

	c = n - 1;
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(arg, char*);
		if (x == NULL)
		{
			printf("nil\n");
		}
		printf("%s", x);
		if (i != c && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
