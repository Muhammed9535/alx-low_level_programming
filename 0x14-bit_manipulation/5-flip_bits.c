#include "main.h"

/**
  * flip_bits - a function that returns the number of bits you would need to
  * flip to get from one number to another
  * @n: first number
  * @m: second number
  * Return: the number of bit
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor_result = n ^ m;
	int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
