#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @n: bytes of the memory area
 * @s: pointer to n
 * @b: constant byte
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
