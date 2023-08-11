#include <stdio.h>

/**
 * main - is a function that prints all digit numbers of base10 starting from 0
 *
 * Return: 0 (successful)
 */
int main(void)
{
	int d;

	for (d = 0 ; d < 10 ; d++)
		putchar(d + '0');
	putchar('\n');
	return (0);
}
