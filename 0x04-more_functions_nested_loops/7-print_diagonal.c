#include "main.h"
/**
  * print_diagonal - a function that draws a diagonal line on the terminal.
  * @n: character to check
  * Return: 0
  */
void print_diagonal(int n)
{
	int i, j;
	char space = ' ';

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
				_putchar(space);
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
