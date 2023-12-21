#include <stdio.h>
/**
  * main - a program that finds and prints the largest prime factor of the
  * Description:  program that finds and prints the largest prime factor of the
  * number 612852475143, followed by a new line.
  * Return: 0
  */
int main(void)
{
	unsigned long i;
	unsigned long largest = -1;
	unsigned long  number = 612852475143lu;

	while (number % 2 == 0)
	{
		largest = 2;
		number /= 2;
	}

	for (i = 3; i * i <= number; i += 2)
	{
		while (number % i == 0)
		{
			largest = i;
			number /= i;
		}
	}
	if (number > 2)
	{
		largest = number;
	}
	printf("%lu\n", largest);

	return (0);
}
