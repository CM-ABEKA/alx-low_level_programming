#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to be added
 * Return: 1 on success and -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, len = 0;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);

	bytes_written = write(f, text_content, len);
	if (bytes_written == -1)
	{
		close(f);
		return (-1);
	}

	close(f);
	return (1);
}
