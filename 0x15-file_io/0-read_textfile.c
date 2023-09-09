#include "main.h"
#include <stddef.h>
/**
 * read_textfile - reads text file and prints letters
 * @filename: filename
 * @letters: number of letters
 *
 * Return: 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(buffer) * letters);
	if (buffer == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	rd = read(file, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	close(file);
	free(buffer);

	return (wr);
}
