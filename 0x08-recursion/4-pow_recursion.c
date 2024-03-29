#include "main.h"
/**
  * _pow_recursion - a function that returns the value of x raised to the power of y
  * @x: number to be raised
  * @y: number to raise to
  * Return: if y is less than 0 return -1
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
