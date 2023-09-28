#include "main.h"

/**
 * get_endianness - Determines the endianness of the machine.
 *
 * Description: This function checks if the machine is little or big endian
 * and returns 0 for big endian and 1 for little endian.
 *
 * Return: 0 for big endian, 1 for little endian.
 */
int get_endianness(void)
{
	unsigned int test_value = 1;
	char *byte_ptr = (char *)&test_value;

	return (*byte_ptr);
}

