#include <stdio.h>

/**
* *main - Entry point
*@argc: argument counter
*@argv: argument vector
*Return: integer
*/

int main(int argc, char *argv[])
{

	int i, sum;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	else
	{
	for (i = 0; i < argc; i++)
	{
	sum += argv[i];
	}
	printf("%d\n", sum);
	}
	return (0);

}
