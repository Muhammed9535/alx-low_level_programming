#include "main.h"
/**
  * times_table -  a function that prints the 9 times table, starting with 0.
  * Return: void
  */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (k <= 9)
			{
				_putchar(' ');
			}
			else
				_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
