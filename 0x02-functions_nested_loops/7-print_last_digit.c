#include "main.h"
/**
  * print_last_digit - a function that prints the last digit of a number.
  * @x: character to check
  * Return: last digit
  */
int print_last_digit(int x)
{
	int c;

	c = x % 10;
	if (c < 0)
		c = -c;
	_putchar(c + '0');
	return (c);
}
