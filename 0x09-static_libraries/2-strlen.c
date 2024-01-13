#include "main.h"
/**
  * _strlen - a function that returns the length of a string.
  * @s: parameter to check
  * Return: sum;
  */
int _strlen(char *s)
{
	int i;
	int sum = 0;

	for (i = 0; s[i]; i++)
		sum += 1;
	return (sum);
}
