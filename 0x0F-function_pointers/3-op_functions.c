#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - prints the sum of 2 numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - prints the difference of 2 numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - prints the product of 2 numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - prints the division of 2 numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - prints the remainder of the division of 2 numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
