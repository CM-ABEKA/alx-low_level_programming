#include <stdio.h>
#include "main.h"

void file_copy(const char *s, const char *d);

/**
 * main - program entry point
 * @argc: argument count
 * @argv: environment variables list
 * Return: integer
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_copy(argv[1], argv[2]);
	exit(0);
}
/**
 * file_copy - copies file
 * @s: source file
 * @d: destination file
 * Return: none
 */
void file_copy(const char *s, const char *d)
{
	int readed, opened, opened2;
	char buffer[1024];

	opened = open(s, O_RDONLY);
	if (opened == -1 || s == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(98);
	}
	opened2 = open(d, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((readed = read(opened, buffer, 1024)) > 0)
	{
		if (write(opened, buffer, 1024) != readed || opened == (-1))
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", d);
	}

	if (readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(98);
	}

	if (close(opened) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", opened);
		exit(100);
	}

	if (close(opened2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", opened);
		exit(100);
	}
}