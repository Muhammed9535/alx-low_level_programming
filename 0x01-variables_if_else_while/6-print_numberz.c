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

	for (i = '0'; i <= '9' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
