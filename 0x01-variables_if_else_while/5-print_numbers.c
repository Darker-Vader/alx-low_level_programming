#include <stdio.h>

/**
 * main - is a function that prints all single digits of base10 starting from 0
 *
 * Return: 0 (successful)
 */
int main(void)
{
	int d;

	for (d = 0 ; d < 10 ; d++)
		printf("%d", d);
	printf("\n");
	return (0);
}
