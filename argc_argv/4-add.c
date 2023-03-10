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
	printf("0\n");
	return (0);
	}

	else
	{
	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
	sum += atoi(argv[i]);
	}
	}
	printf("%d\n", sum);
	return (0);
	}
}
