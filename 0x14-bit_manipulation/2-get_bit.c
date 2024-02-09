#include "main.h"

/**
  * get_bit - a function that returns the value of a bit at a given index
  * @n: number to check for it bit
  * @index: index at which to check for bit
  * Return: value of the bit
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
