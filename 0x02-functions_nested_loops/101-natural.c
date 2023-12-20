#include <stdio.h>
/**
  * main - print multiples of 3 or 5
  * Description : a program that computes and prints the sum of
  * all the multiples of 3 or 5 below 1024
  * Return: 0
  */
int main(void)
{
	int i;
	unsigned long sum, sum1, sum2;

	sum = 0;
	sum1 = 0;
	sum2 = 0;
	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			sum1 += i;
		}
		else if ((i % 5) == 0)
		{
			sum2 += i;
		}
	sum = sum1 + sum2;
	printf("%lu\n", sum);
	}
	return (0);
}

