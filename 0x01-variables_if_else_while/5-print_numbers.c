#include <stdio.h>
/**
  * main - prints all single digit numbers
  * Description:  a program that prints all single digit
  * numbers of base 10 starting from 0
  * Return: zero
  */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
