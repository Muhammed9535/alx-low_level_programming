#include "main.h"
/**
  * rot13 -  a function that encodes a string using rot13.
  * @s: parameter to check
  * Return: string
  */
char *rot13(char *s)
{
	int i, j;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *small = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; alpha[j]; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = small[j];
				break;
			}
		}
	}
	return (s);
}
