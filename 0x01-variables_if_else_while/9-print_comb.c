#include <stdio.h>

/**
 * main - entry point
 * Decscription: print all possible combination of single digit
 * numbers (0, 1, 2, 3, 4, 5, 6, 7, 8, 9$)
 *
 * Return:0
 */

int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar((c % 10) + '0');
		if (c == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

