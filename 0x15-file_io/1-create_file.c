#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int new_fd, bytes_written, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	new_fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes_written = write(new_fd, text_content, len);

	if (new_fd == -1 || bytes_written == -1)
		return (-1);

	close(new_fd);

	return (1);
}
