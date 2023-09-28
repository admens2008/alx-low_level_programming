#include "main.h"

/**
 * print_binary - Prints the binary representation of a decimal number.
 * @decimal_num: The decimal number to convert and print in binary.
 */
void print_binary(unsigned long int decimal_num)
{
	int i, count_of_ones = 0;
	unsigned long int current_bit;

	for (i = 63; i >= 0; i--)
	{
		current_bit = decimal_num >> i;

		if (current_bit & 1)
		{
			_putchar('1'); /* Print '1' for a set bit */
			count_of_ones++;
		}
		else if (count_of_ones)
		{
			_putchar('0'); /* Print '0' for trailing zeros */
		}
	}

	if (!count_of_ones)
	{
		_putchar('0'); /* Print '0' for the case of zero itself */
	}
}

