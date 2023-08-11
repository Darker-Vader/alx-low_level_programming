#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - its a function that prints all possible combinations of three digits
 *
 * Return: 0 (successful)
 */
int main(void)
{
	int o, d, t;

	for (o = '0' ; o < '9' ; o++)
	{
		for (d = o + 1 ; d <= '9' ; d++)
		{
			for (t = d + 1 ; t <= '9' ; t++)
			{
				if ((d != o) != t)
				{
					putchar(o);
					putchar(d);
					putchar(t);
					if (o == '7' && d == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
