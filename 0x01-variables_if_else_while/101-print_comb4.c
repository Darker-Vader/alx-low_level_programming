#include <stdio.h>

/**
 * main - its a function that prints all possible combinations of three digits
 *
 * Return: 0 (successful)
 */
int main(void)
{
	int o;
	int d;
	int t;

	for (o = 0 ; o <= 10 ; o++)
	{
		for (d = 0 ; d <= 10 ; d++)
		{
			for (t = 0 ; t <= 10 ; t++)
			{
				putchar(o + '0');
				putchar(d + '0');
				putchar(t + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
