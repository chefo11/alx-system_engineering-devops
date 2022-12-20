#include <stdio.h>
<<<<<<< HEAD

/*
 * Description: prints the numbers 1 - 100
=======
#include "main.h"

/**
>>>>>>> 18bf07c257e91d87e42679ba24414cd991d90cf3
 * main - prints Buzz each numbers of 3 and 5.
 * Return: Always 0
 */

int main(void)
{
	int i;

<<<<<<< HEAD
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
=======
	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
>>>>>>> 18bf07c257e91d87e42679ba24414cd991d90cf3
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
