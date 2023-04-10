#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int sum, num, i, j;
	char *arg;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}



	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(arg);
		sum += num;
	}

		printf("%d\n", sum);
		return (0);
}
