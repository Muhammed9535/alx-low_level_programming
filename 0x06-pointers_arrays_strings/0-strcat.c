#include "main.h"
/**
  * _strcat - a function that concatenates two strings.
  * @dest: parameter one
  * @src: parameter two
  * Return: the complete string
  */
char *_strcat(char *dest, char *src)
{
	int i, len;

	len = 0;
	i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';

	return (dest);
}


