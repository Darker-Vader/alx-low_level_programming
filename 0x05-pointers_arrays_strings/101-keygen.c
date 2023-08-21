#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for program 101-crackme
 *
 * Return: 0
 */

int main(void)
{
	char p[84];
	int i = 0, s = 0, df1, df2;

	srand(time(0));
	while (s < 2772)
	{
		p[i] = 33 + rand() % 94;
		s += p[i++];
	}
	p[i] = '\0';
	if (s != 2772)
	{
		df1 = (s - 2772) / 2;
		df2 = (s - 2772) / 2;
		if ((s - 2772) % 2 != 0)
			df1++;
		for (i = 0 ; p[i] ; i++)
		{
			if (p[i] >= (33 + df1))
			{
				p[i] -= df1;
				break;
			}
		}
		for (i = 0 ; p[i] ; i++)
		{
			if (p[i] >= (33 + df2))
			{
				p[i] -= df2;
				break;
			}
		}
	}
	printf("%s", p);
	return (0);
}
