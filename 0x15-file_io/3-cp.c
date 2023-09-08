#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: ...
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
 * copy_file - copies content from another file.
 * @source: source file.
 * @destination: destination file.
 *
 * Return: ...
 */
void copy_file(const char *source, const char *destination)
{
	int src_fd, dest_fd;
	ssize_t n;
	char buffer[BUFFER_SIZE];

	src_fd = open(source, O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
		exit(98);
	}
	dest_fd = open(destination, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination);
		close(src_fd);
		exit(99);
	}
	while ((n = read(src_fd, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(dest_fd, buffer, n) != n)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination);
			close(src_fd);
			close(dest_fd);
			exit(99);
		}
	}

	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
		close(src_fd);
		close(dest_fd);
		exit(98);
	}
	close(src_fd);
	close(dest_fd);
}
