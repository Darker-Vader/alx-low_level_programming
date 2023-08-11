#include <stdio.h>

/**
 * main - its a function that prints all numbers of base16 in lowercase
 *
 * Return: 0 (successful)
 */
int main(void)
{
	int b;
	char s;

	for (b = 0 ; b < 10 ; b++)
		putchar(b + '0');
	for (s = 'a' ; s <= 'f' ; s++)
		putchar(s);
	putchar('\n');
	return (0);
}
