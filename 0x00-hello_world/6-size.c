#include <stdio.h>

/**
 * main - this is main function
 *
 * Return: always 0
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int t;
	float f;
	
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(t));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
