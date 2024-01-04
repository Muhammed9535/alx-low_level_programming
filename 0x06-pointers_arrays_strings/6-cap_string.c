#include "main.h"
/**
  * cap_string - a function that capitalizes all words of a string.
  *@s: paraemeter to check
  * Return: character
  */
char *cap_string(char *s)
{

	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ' || s[i] == ',' || s[i] == '!' || s[i] == '.' || s[i] == '?' || s[i] == '"' || s[i] == '{' || s[i] == '}' || s[i] == '(' || s[i] == ')' || s[i] == ';' || s[i] == ':' || s[i] == '\t' || s[i] == '\n')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] += (-32);
			}
		}
	}
	return (s);
}
