#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX
 * standard output
 * @filename: the file
 * @letters: number of letters to be read
 * Return: acrual number of letters read or 0 for no result
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, r;
	char *buffer = malloc(sizeof(char *) * letters);

	if (!filename)
		return (0);
	if (!buffer)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	r = read(file, buffer, letters);
	if (r == -1)
		return (0);
	buffer[letters] = '\0';
	write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(file);

	return (r);
}
