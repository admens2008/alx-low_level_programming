#include "main.h"

/**
 * clear_bit - Clears (sets to 0) a specific bit in a given number.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to clear (0-based).
 *
 * Description: This function clears the bit at the specified index in the
 * provided number by performing a bitwise operation.
 *
 * Return: 1 for success, -1 for failure (if the index is out of range).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63) /* Check if the index is out of range (greater than 63). */
		return (-1);

	/* Use a bitwise AND operation to clear the bit at the specified index. */
	*n = (~(1UL << index) & *n);

	return (1);
}

