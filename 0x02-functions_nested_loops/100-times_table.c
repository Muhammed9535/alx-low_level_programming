#include "main.h"
#include <stdio.h>
/**
  * print_times_table -  a function that prints the n times table,
  * starting with 0.
  * @n: charactter to check
  * Return: Alwaya 0
  */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int k;

			k = i * j;

			if (k <= 99)
			{
				_putchar(' ');
			}
			if (k <= 9)
			{
				/*_putchar(' ');*/
			}
			if (k >= 100)
			{
				_putchar((k / 100) + '0');
				_putchar(((k / 10)) % 10 + '0');
			}
			else if (k >= 10 && k <= 99)
			{
				_putchar((k / 10) + '0');
			}
			_putchar((k % 10) + '0');
			if (j < n)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
