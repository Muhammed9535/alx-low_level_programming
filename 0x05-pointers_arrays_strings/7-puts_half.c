#include "main.h"
/**
  * puts_half - a function that prints half of a string
  * @str: parameter to check
  */
void puts_half(char *str)
{
	int i, len, c, n;

	len = 0;
	while (str[len])
	{
		len++;
	}

	c = len / 2;
	if ((len % 2) == 0)
	{
		for (i = c; str[i]; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else if (len % 2)
	{
		for (n = (len - 1) / 2 ; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}

}
