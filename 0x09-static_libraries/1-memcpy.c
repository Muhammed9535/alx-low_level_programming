#include "main.h"
/**
  * _memcpy -  a function that copies memory area.
  * @dest: destination to copy memories to
  * @src: source of memory
  * @n: number of byte
  * Return: pointer to the memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}
