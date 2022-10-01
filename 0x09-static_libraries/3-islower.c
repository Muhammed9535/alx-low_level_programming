#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *@c: the character to print
 * Return:1 if c is a lowercase 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
