#include <stdio.h>
/**
  * main - a program that prints the lowercase alphabet in reverse
  * Description: a program that prints the lowercase alphabet in reverse
  * using putchar function
  * Return: zero
  */
int main(void)
{
	int i;

	i = 'z';
	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
