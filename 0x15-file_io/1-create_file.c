#include "main.h"

/**
 * create_file - create a file
 * @filename: filename
 * @text_content: content to add to file
 *
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int wr;
	int i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	for (i = 0; text_content[i]; i++)
		;
	wr = write(file, text_content, i);
	if (wr == -1)
		return (-1);

	close(file);
	return (1);
}
