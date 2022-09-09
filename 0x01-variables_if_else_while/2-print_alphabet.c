#include <stdio.h>

/**
 * main - entry point
 * Decsription: print alphabet in lowercase
 *
 * Return: 0
 */

int main(void)

{
	char i;

	i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	return (0);
}
