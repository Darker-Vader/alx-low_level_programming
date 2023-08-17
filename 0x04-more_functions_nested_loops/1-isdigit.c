#include "main.h"

/**
 * _isdigit - a function that checks if a character is a digit
 * @c: The function parameter
 * Return: 1 (if c is a digit) 0 (if otherwise)
 */

int  _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
