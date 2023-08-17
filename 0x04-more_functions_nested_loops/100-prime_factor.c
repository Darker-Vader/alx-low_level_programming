#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest pime factor of 612852475143
 *
 * Return: 0 (success)
 */

int main(void)
{
	long f, p;
	long number = 612852475143;
	double square = sqrt(number);

	for (f = 1 ; f <= square ; f++)
	{
		if (number % f == 0)
		{
			p = number / f;
		}
	}
	printf("%ld\n", p);
	return (0);
}
