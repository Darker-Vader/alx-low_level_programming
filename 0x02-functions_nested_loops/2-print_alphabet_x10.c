#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int t;
	char l;

	for (t = 1 ; t < 10 ; t++)
	{
		for (l = 'a' ; l <= 'z' ; l++)
			_putchar(l);
		_putchar('\n');
	}
}

