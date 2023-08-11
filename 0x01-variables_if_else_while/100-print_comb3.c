#include <stdio.h>

/**
 * main - its a function that prints all possible combinations of two digits
 *
 * Return: 0 (successful)
 */
int main(void)
{
	int o;
	int t;

	for (o = 0 ; o < 10 ; o++)
	{
		for (t = 0 ; t < 10 ; t++)
		{
			if (o != t)
			{
				putchar(o + '0');
				putchar(t + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
