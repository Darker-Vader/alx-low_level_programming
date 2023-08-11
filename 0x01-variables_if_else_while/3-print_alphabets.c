#include <stdio.h>

/**
 * main - is a function that prints alphabets in lowercase and then uppercase
 *
 * Return: 0 (successful)
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);
	for (c = 'A' ; c <= 'Z' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
