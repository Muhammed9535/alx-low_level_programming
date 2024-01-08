#include "main.h"
#include <stddef.h>
/**
  * _strchr - a function that locates a character in a string.
  * @s: parameter to check
  * @c: parameter to check for
  * Return: the parameter found
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
