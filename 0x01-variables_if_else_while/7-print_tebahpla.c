#include <stdio.h>

/**
 * main - is a function that prints the lowercase alphabet in reverse
 *
 * Return: 0 (successful)
 */
int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
