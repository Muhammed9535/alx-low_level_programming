#include "main.h"
/**
  * _puts - a function that prints a string, followed by a new line, to stdout
  * @str: parameter to print
  */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
