#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	char Alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int j;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabets[i]);
	}
	for (j = 0; j < 26; j++)
	{
		putchar(Alphabets[j]);
	}
		putchar('\n');
	return (0);
}	
