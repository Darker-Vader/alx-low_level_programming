#include "main.h"

/**
 * print_square - a function that prints a square
 * @size: The function parameter
 * Return: void
 */

void print_square(int size)
{
	int n, t;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 0 ; n < size ; n++)
		{
			for (t = 0 ; t < size ; t++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
