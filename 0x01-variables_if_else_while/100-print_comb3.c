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
	int o = '0';
	int t = '0';

	while (o <= '9')
	{
		while (t <= '9')
		{
			if (!(o > t) || o == t)
			{
				putchar(o);
				putchar(t);
				if (o == '8' && t == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			t++;
		}
		t = '0';
		o++;
	}
return (0);
}
