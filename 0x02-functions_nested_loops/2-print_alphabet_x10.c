#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet,
 * in lowercase, followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		int letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		i++;
		_putchar('\n');
	}
}
