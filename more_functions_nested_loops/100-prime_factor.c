#include <stdio.h>
#include <math.h>

/**
 * main - prints largest prime number
 * Return: Always 0
 */

int main(void)
{

	int i;
	long j;
	long num = 612852475143;
	double square = sqrt(num);

	for (i = 1; i <= square; i++)
	{
		if (num % i == 0)
		{
			j = num / i;
		}
	}

	printf("%ld\n", j);

	return (0);
}
