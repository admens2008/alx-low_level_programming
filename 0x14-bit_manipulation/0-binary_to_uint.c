#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @binary_string: The binary string to convert.
 *
 * Return: The converted unsigned integer, or 0 if invalid input.
 */
unsigned int binary_to_uint(const char *binary_string)
{
	int index;
	unsigned int decimal_value = 0;

	if (!binary_string)
		return (0);

	for (index = 0; binary_string[index]; index++)
	{
		if (binary_string[index] < '0' || binary_string[index] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (binary_string[index] - '0');
	}

	return (decimal_value);
}

