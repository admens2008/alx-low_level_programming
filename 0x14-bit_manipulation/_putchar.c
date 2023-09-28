#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout.
 * @c: The character to print.
 *
 * Description: This function writes the character c to the standard output.
 *
 * Return: On success, it returns 1. On error, -1 is returned, and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

