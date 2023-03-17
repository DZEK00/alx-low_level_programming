#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i == 4)
	{
		continue;
	}
		else if (i == 16)
	{
		continue;
	}
		putchar(alpha[i]);
	}
		putchar('\n');

return (0);
}
