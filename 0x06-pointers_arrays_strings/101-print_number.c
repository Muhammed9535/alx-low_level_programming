#include "main.h"
/**
  * print_number - a function that prints an integer.
  * @n: number to print
  */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
		print_number(n1 / 10);

	_putchar((n % 10) + '0');
}
