#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count1;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count1 = 0; count1 < 50; count1++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count1 == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

