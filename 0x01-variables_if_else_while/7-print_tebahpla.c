#include <stdio.h>

/**
 * main - entry poit
 * Description: print lowercase alphabet in reversee
 *
 * Return:0
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
