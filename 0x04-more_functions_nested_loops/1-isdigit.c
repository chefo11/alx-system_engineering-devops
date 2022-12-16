#include "main.h"

/**
 * _isdigit - checks if parameter is a number between 0 to 9.
 * @c: number to check.
 * Return: 1 if is a number between (0 to 9) or 0 if otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
