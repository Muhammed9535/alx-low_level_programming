#include "main.h"
#include <stdio.h>

/**
 * main - calls int _isdigit(int c) function
 *
 * Return: 0
 */
int main(void)
{
	char c;

	c = '0';
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
