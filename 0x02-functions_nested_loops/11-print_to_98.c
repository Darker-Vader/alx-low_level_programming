#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 *@nn: function parameter
 * Return: 0 (success)
 */
void print_to_98(int nn)
{
	if (nn <= 98)
	{
		for (; nn <= 98; nn++)
		{
			if (nn == 98)
			{
				printf("%d", nn);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", nn);
			}
		}
	}
	else
	{
		for (; nn >= 98; nn--)
		{
			if (nn == 98)
			{
				printf("%d:", nn);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", nn);
			}
		}
	}
}
