#include <stdio.h>

/**
 * main - is a function that prints all alphabets in lowercase except q and e
 *
 * Return: 0 (successful)
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		if (c != 'q' && c != 'e')
			putchar(c);
	putchar('\n');
	return (0);
}
