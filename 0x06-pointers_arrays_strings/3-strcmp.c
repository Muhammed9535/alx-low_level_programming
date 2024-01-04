#include "main.h"
/**
  * _strcmp - a function that compares two strings.
  *@s1: parameter 1
  *@s2: parameter 2
  * Return: the difference
  */
int _strcmp(char *s1, char *s2)
{
	int i, c, d, k;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		c = s1[i] - '0';
		d = s2[i] - '0';
	}
	if (s1[i] !=  s2[i])
	{
		k = c - d;
	}
	else if (s1[i] == s2[i])
	{
		k = c - d;
	}
	return (k);
}
