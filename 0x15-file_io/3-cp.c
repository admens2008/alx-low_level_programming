#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocate_buffer(char *dest_file);
void close_descriptor(int fd);

/**
 * allocate_buffer - Allocates a 1024-byte buffer for file copying.
 * @dest_file: The name of the destination file.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *allocate_buffer(char *dest_file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", dest_file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_descriptor - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_descriptor(int fd)
{
	int close_result;

	close_result = close(fd);

	if (close_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of one file to another.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect, it exits with code 97.
 * If the source file does not exist or cannot be read, it exits with code 98.
 * If the destination file cannot be created or written to, it exits with code 99.
 * If any file descriptor cannot be closed, it exits with code 100.
 */
int main(int argc, char *argv[])
{
	int source, destination, read_result, write_result;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = allocate_buffer(argv[2]);
	source = open(argv[1], O_RDONLY);
	read_result = read(source, buffer, 1024);
	destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do
	{
		if (source == -1 || read_result == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_result = write(destination, buffer, read_result);
		if (destination == -1 || write_result == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_result = read(source, buffer, 1024);
		destination = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_result > 0);

	free(buffer);
	close_descriptor(source);
	close_descriptor(destination);

	return (0);
}

