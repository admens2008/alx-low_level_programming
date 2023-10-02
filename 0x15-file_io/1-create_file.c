#include "main.h"

/**
 * create_file - Create a new file and write text content to it.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to the string to write to the file.
 *
 * Description: This function creates a new file with the given filename
 * and writes the provided text content to it. If the file already exists,
 * it will be truncated.
 *
 * Return: On success, it returns 1. On failure, it returns -1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_status, content_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (content_length = 0; text_content[content_length];)
			content_length++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_status = write(file_descriptor, text_content, content_length);

	if (file_descriptor == -1 || write_status == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}

