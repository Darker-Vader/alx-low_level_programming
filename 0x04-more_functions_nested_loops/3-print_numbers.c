#include "main.h"

/**
 * print_numbers - a function that prints numbers from 0 to 9
 *
 * Return: result
 */

void print_numbers(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
