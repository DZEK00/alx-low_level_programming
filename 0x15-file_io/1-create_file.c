#include "main.h"

/**
* create_file - function that creates a file
*
* @filename: input
* @text_content: input
*
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int f_op, f_wr, i;

	if (filename == NULL)
		return (-1);
	f_op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f_op < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(f_op);
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		;
	f_wr = write(f_op, text_content, i);
	if (f_wr < 0)
		return (-1);
	close(f_op);
	return (1);
}
