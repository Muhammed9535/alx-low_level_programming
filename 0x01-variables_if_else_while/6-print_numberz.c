#include <stdio.h>

/**
 * main - entry point
 * Description: print single digit from zero by using putchar function
 *
 * Return:0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
	{
		putchar("%d\n", i);
	}
	return (0);
}
