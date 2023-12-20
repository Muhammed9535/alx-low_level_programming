#include <stdio.h>
/**
  * main - print fibonaccci sequence
  * Description:  a program that prints the first 50 Fibonacci numbers,
  * starting with 1 and 2
  * Return: 0
  */
int main(void)
{
	unsigned long first, i, second, next;

	first = 1;
	second = 2;
	for (i = 1; i <= 50; i++)
	{
		if (i < 2)
		{
			next = i;
		}
		else
		{
			next = first + second;
			first = second;
			second = next;
			if (i < 50)
				printf(", ");
		}

		printf("%lu", next);

	}
	printf("\n");
	return (0);
}

