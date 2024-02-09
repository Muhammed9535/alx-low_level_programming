#include "main.h"

/**
  * set_bit -  a function that sets the value of a bit to 1 at a given index.
  * @n: pointer to the number
  * @index: index to set value at
  * Return: 1 if worked -1 if error occured
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	*n |= (1UL << index);
	return (1);
}
