#include "main.h"

/**
 * flip_bits - Counts the number of different bits between two numbers.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that need to be flipped to transform n into m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit_position;
	int bit_difference_count = 0;
	unsigned long int current_bit_difference;
	unsigned long int exclusive_or_result = n ^ m;

	for (bit_position = 63; bit_position >= 0; bit_position--)
	{
		current_bit_difference = exclusive_or_result >> bit_position;
		if (current_bit_difference & 1)
			bit_difference_count++;
	}

	return (bit_difference_count);
}

