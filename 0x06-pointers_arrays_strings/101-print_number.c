#include "main.h"
/**
  * print_number - a function that prints an integer.
  * @n: number to print
  */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		if (n <= 99)
		{
			_putchar((n / 10) + '0');
		}
		else if (n <= 999)
		{
			_putchar((n / 100) + '0');
			_putchar((n / 10) % 10 + '0');
		}
		else if (n <= 9999)
		{
			_putchar((n / 1000) + '0');
			_putchar((n / 100) % 10 + '0');
			_putchar((n / 10) % 10 + '0');
		}
	}
	_putchar((n % 10) + '0');
}
