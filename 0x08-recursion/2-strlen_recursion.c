#include "main.h"
#include <string.h>
/**
  * _strlen_recursion -  a function that returns the length of a string.
  * @s: pointer to the sting to count
  * Return: number of character in the string
  */
int _strlen_recursion(char *s)
{
	if (s)
	{
		return 1;
	}
	return (s + _strlen_recursion(s - 1));
}
