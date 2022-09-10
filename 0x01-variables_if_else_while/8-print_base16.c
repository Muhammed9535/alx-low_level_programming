#include <stdio.h>

/**
 * main - entry point
 * Description: print all number of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = '0'; i <= '9' ; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

