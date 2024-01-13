#include "main.h"
/**
  * is_prime_number - a function that check for prime number
  * @n: number to check
  * Return: 1 if prime number other 0
  */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return 1;

	}
	return (1 * is_prime_number(n - 1));
}
