#include <stdio.h>

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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
