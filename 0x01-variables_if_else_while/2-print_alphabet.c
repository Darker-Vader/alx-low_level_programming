#include <stdio.h>

/**
 * main - this prints the alphabet in lowercase
 *
 * Return: 0 (successful)
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
