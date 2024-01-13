#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * _strspn - a function that gets the length of a prefix substring
  * @s: parameter to check
  * @accept: secoond parameter
  * Return: the number of byte
  */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int count = 0;

	while (*s && strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}
	return (count);
}
