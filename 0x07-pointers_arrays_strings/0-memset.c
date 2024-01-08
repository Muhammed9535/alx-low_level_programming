#include "main.h"
/**
  * _memset - a function that fills memory with a constant byte.
  * @s: ptr memory address to be filled
  * @b: content to put
  * @n: number of byte to replace in the memory
  * Return: pointer to the memory address
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (i != n)
		{
			s[i] = b;
		}
		else
			continue;
	}
	return (s);
}
