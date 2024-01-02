#include "main.h"
/**
  * print_rev - a function that prints a string, in reverse
  * @s: parameter to print
  */
void print_rev(char *s)
{
	int i;

	for (i = *s; i >= 0; i--)
	{
		if (s[i] != '\0')
			_putchar(s[i]);
	}
	_putchar('\n');
}
