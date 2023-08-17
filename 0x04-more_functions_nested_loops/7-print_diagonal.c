#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: The function parameter
 * Return: void
 */

void print_diagonal(int n)
{
	int d, l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 0 ; d < n ; d++)
		{
			for (l = 0 ; l < d ; l++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
