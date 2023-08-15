#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 *@l: function parameter
 * Return: m
 */
int print_last_digit(int l)
{
	int m;

	m = l % 10;
	if (l < 0)
		m = -m;
	_putchar(m + '0');
	return (m);
}
