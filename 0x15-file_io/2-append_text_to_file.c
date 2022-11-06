#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to be added
 * Return: 1 on success and -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int r, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	r = open(filename, O_WRONLY | O_APPEND);
	w = write(r, text_content, len);

	if (r == -1 || w == -1)
		return (-1);

	close(r);
	return (1);
}
