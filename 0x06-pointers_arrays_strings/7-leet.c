#include "main.h"
/**
  * leet -  a function that encodes a string into 1337
  * @s: parameter to test
  * Return: string
  */
char *leet(char *s)
{
	int i, j;
	char *met = "aAeEtTlL";
	char *chint = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == met[j])
			{
				s[i] = chint[j];
			}
		}
	}
	return (s);
}
