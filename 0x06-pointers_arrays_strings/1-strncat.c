#include "main.h"
/**
  * _strncat - a function that concatenates two strings.
  * @dest: parameter one
  * @src: parameter two
  * @n: number of byte
  * Return: concatenates string
  */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	while (dest[len])
	{
		len++;
	}
	for (i = 0; i < n; i++)
	{
		dest[len++] = src[i];
	}
	dest[len++] = '\0';
	return (dest);
}
