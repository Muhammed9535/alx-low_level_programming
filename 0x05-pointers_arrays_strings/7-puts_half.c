#include "main.h"
/**
  * puts_half - a function that prints half of a string
  * @str: parameter to check
  */
void puts_half(char *str)
{
	int i, len, len1, c;

	len = 0;
	while (str[len])
	{
		len++;
	}

	len1 = len - 1;
	c = len1 / 2;
	for (i = c; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
