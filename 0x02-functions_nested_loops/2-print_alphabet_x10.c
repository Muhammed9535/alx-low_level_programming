#include "main.h"

/**
 * print_alphabet_x10 - funtion to print abc 10 times
 *
 * Return:0
 */

void print_alphabet_x10(void)
{

	int j;

	j = 1;
	while (j <= 10)
	{
		int c;

		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);

		_putchar('\n');
		j++;
	}
}
