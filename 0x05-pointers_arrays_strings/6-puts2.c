#include "main.h"
/**
  * puts2 -  a function that prints every other character of a string, starting
  * with the first character
  * @str: parameter to check
  */
void puts2(char *str)
{
	int i, len;

	len = 0;
	while(str[len])
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
