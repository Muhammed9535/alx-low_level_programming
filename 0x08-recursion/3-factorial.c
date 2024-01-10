#include "main.h"
/**
  * factorial - a function that returns the factorial of a given number
  * @n: number to find the factorial
  * Return: the factorial the number
  */
int factorial(int n)
{
	int result = n;

	if (n < 0)
	{
		return (-1);
	}
	if (n >= 0 && n <= 1)
	{
		return (1);
	}
	result *= factorial(n - 1);
	return (result);
}

