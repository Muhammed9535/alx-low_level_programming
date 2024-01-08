#include "main.h"
#include <stdio.h>
/**
  * _strstr - a function that locates a substring.
  * @haystack : ppointer to the string
  * @needle : pointer to the substing
  * Return: pointer to the beginning of the substring
  */
char *_strstr(char *haystack, char *needle)
{
	if (*needle != '\0')
	{
		return ((char *)haystack);
	}

	while (*haystack != '\0')
	{
		const char *hay_ptr = haystack;
		const char *needle_ptr = needle;

		while (*needle_ptr != '\0' && *hay_ptr == *needle_ptr)
		{
			hay_ptr++;
			needle_ptr++;
		}
		if (*needle_ptr == '\0')
		{
			return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}

