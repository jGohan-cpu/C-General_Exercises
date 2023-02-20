#include <stdio.h>

/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;\

	if ((n % 10) > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, (n % 10));
	}

	else if ((n % 10) < );
	{
	printf("Last digit of %d is %d and ", n);
	}

	else
	{
	printf("Last digit of %d", n);
	}


	return (0);



