#include <stdio.h>
/**
  * main -  first 98 Fibonacci numbers
  * Description: a program that finds and prints the first 98 Fibonacci
  * numbers,starting with 1 and 2, followed by a new line.
  */
int main(void)
{
	unsigned long long next, first, second;
	int i;

	first = 1;
	second = 2;
	for (i = 1; i < 99; i++)
	{
		if (i <= 2)
			next = i;
		else
		{
			next = first + second;
			first = second;
			second = next;
			if (i < 98)
				printf(", ");
		}
		printf("%llu", next);
	}
	printf("\n");
	return (0);
}
