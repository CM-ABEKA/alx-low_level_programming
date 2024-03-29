#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: content of the file
 * Return: 1 on success -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int output, len = 0;
	ssize_t bytes_written;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	output = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (output == -1)
		return (-1);

	if (text_content)
	{
		bytes_written = write(output, text_content, len);
		if (bytes_written == -1)
		{
			close(output);
			return (-1);
		}
	}

	close(output);
	return (1);
}
