#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Hexa[] = "abcdef";
	char Deci[] = "0123456789";
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		putchar(Deci[i]);
	}
	for (j = 0; j < 6; j++)
	{
		putchar(Hexa[j]);
	}
		putchar('\n');
return (0);
}
