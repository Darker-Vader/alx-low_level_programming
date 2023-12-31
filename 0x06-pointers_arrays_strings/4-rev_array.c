#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: function parameter1
 * @n: function parameter2
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int t, i;

	for (i = n - 1 ; i >= n / 2 ; i--)
	{
		t = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = t;
	}
}
