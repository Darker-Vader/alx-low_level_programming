#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints a Fizz Buzz program
 *
 * Return: 0 (success)
 */

int main(void)
{
	int fb;

	for (fb = 1 ; fb <= 100 ; fb++)
	{
		if ((fb % 3 == 0) && (fb % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (fb % 3 == 0)
		{
			printf("Fizz");
		}
		else if (fb % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", fb);
		}
		if (fb != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
