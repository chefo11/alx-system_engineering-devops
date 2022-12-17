#include "main.h"

/**
 * print_numbers - print numbers between 0 and 9
 * owned by Bwave ICT
 * Return: no return
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
