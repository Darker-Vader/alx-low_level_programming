#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet in lowercase
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a' ; l <= 'z' ; l++)
		_putchar(l);
	_putchar('\n');
}
