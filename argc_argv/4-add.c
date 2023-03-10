#include <stdio.h>
#include <stdlib.h>
/**
* *main - Entry point
*@argc: argument counter
*@argv: argument vector
*Return: integer
*/

int main(int argc, char *argv[])
{

	int i, sum;

	if (argc == 1)
	{
	printf("Error\n");
	return (1);
	}

	else
	{
	for (i = 1; i < argc; i++)
	{
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
	}

}
