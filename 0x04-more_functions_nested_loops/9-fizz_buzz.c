#include <stdio.h>

/*
 * Description: prints the numbers 1 - 100
 * main - prints Buzz each numbers of 3 and 5.
 * Return: Always 0
 */

int main(void)
{
	int i;

	printf("%d", n);
	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
