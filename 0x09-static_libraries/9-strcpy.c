#include "main.h"
/**
  * *_strcpy - a function that copies the string pointed to by src, including
  * the terminating null byte (\0),
  * @dest: parameter to copy into
  * @src: parameter to copy
  * Return: character
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
