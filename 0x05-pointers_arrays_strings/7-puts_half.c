#include "main.h"
/**
  * puts_half - a function that prints half of a string
  * @str: parameter to check
  */
void puts_half(char *str)
{
	int i, len, c;

	len = 0;
	while (str[len])
	{
		len++;
	}

	c = len / 2;
	for (i = c; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
