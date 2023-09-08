#include <stdio.h>
#include "main.h"

void copy_file(const char *source, const char *destination);

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
 * copy_file - ...
 * @source: ...
 * @destination: ...
 *
 * Return: ...
 */
void copy_file(const char *source, const char *destination)
{
int ofd, tfd, readed;
char buff[1024];

ofd = open(source, O_RDONLY);
if (!source || ofd == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
	exit(98);
}

tfd = open(destination, O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((readed = read(ofd, buff, 1024)) > 0)
{
	if (write(tfd, buff, readed) != readed || tfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination);
		exit(99);
	}
}

if (readed == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
	exit(98);
}

if (close(ofd) == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ofd);
	exit(100);
}

if (close(tfd) == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tfd);
	exit(100);
}
}
