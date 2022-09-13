#include "main.h"

/**
 * main - entry point
 *
 * Return:0
 */

void print_alphabet_x10(void)
{

	int j;

	j = 1;
	while (j <= 9)
	{
		int c;

		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		j++;
	}
	_putchar('\n');
}
