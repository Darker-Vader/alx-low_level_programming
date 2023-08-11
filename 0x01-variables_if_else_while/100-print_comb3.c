#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - its a function that prints all possible combinations of two digits
 *
 * Return: 0 (successful)
 */
int main(void)
{
	int o, t;

	for (o = '0' ; o < '9' ; o++)
	{
		for (t = o + 1 ; t <= '9' ; t++)
		{
			if (t != o)
			{
				putchar(o);
				putchar(t);
				if (o == '8' && t == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
