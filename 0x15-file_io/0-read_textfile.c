#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX
 * standard output
 * @filename: the file
 * @letters: number of letters to be read
 * Return: actual number of letters read or 0 for no result
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (!buffer)
	{
		close(file);
		return (0);
	}

	bytes_read = read(file, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	buffer[bytes_read] = '\0';
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	close(file);

	if (bytes_written == -1)
	{
		if ((size_t)bytes_written != (size_t)bytes_read)
			return (0);
	}

	return (bytes_read);
}
