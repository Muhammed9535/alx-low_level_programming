#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * string_nconcat - a function that concatenates two strings.The returned
  * pointer shall point to a newly allocated space in memory, which contains
  * s1, followed by the first n bytes of s2, and null terminated
  * @s1: first string
  * @s2:second string
  * @n: number of character to print
  * Return: Null if function fails, memory allocated if funtion does not fail
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *joint;
	unsigned int len, total, i, j;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = 0;
	while (s1[len])
	{
		len++;
	}
	total = len + n;
	joint = malloc(sizeof(char) * total);
	if (joint == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = 0; s1[i]; i++)
	{
		joint[j++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		joint[j++] = s2[i];
	}
	joint[j] = '\0';
	return (joint);
}
