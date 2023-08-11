#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - its a function that prints all possible combinations of two two-digit
 *
 * Return: 0 (successful)
 */
int main(void)
{
	int o, d;

	for (o = 0 ; o <= 98 ; o++)
	{
		for (d = o + 1 ; d <= 99 ; d++)
		{
			putchar((o / 10) + '0');
			putchar((o % 10) + '0');
			putchar(' ');
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');
			if (o == 98 && d == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
