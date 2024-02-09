#include "main.h"
/**
  * binary_to_uint - a function that converts a binary number to
  * an unsigned int
  * @b: pointer to string of 0 & 1
  * Return: converted number
  * or 0 if there is one or more chars in the string or b is null
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	while (*b != '\0')
	{
		result <<= 1;

		if (*b == '1')
		{
			result |= 1;
		}
		else if (*b != '0')
			return (0);
		b++;
	}
	return (result);
}
