#include "main.h"
/**
  * print_rev - a function that prints a string, in reverse
  * @s: parameter to print
  */
void print_rev(char *s)
{
	int i, len, len1;

	len = 0;
	while (s[len])
	{
		len++;
	}

	len1 = len - 1;
	for (i = len1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

