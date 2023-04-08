#include <stdio.h>
#include <stdlib.h>

/**
* main - checks the code
*
* @argc: input
* @argv: input
*
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int mul;
	int a;
	int b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	mul = a * b;

	printf("%d\n", mul);
	return (0);
}
