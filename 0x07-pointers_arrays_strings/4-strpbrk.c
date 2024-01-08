#include "main.h"
#include <stdio.h>
/**
  * _strpbrk - a function that searches a string for any of a set of bytes.
  * @s: pointer to thr string to be searched
  * @accept: pointer to the character to seach in th string
  * Return: pointer to the fisrt occurence in the string
  */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		const char *ptr = accept;

		while (*ptr)
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return (NULL);
}

