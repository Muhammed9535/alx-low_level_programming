#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - will assign a random number to the variable n
  * Description: This program will assign a random number
  * to the variable n each time it is executed
  * Return: 0 always
  */
int main(void)
{
	int n, c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	c = n % 10;
	if (c > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, c);
	}
	else if (c == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, c);
	}
	else if ((c < 6) && (c != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, c);
	}
	return (0);
}
