#include "main.h"
/**
  * rev_string - a function that reverses a string.
  * @s: parameter to print
  */
void rev_string(char *s)
{
	int len, len1;
	int start = 0;

	len = 0;
	while (s[len])
	{
		len++;
	}
	len1 = len - 1;

	while (start < len1)
	{
		char temp = s[start];

		s[start] = s[len1];
		s[len1] = temp;

		start++;
		len1--;
	}
}



