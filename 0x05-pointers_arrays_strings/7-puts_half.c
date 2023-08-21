#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd let, c = (length_of_the_string - 1) / 2
 * @str: input
 * Return: void
 */
void puts_half(char *str)
{
	int a, c, longi;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		longi++;

	c = (longi / 2);

	if ((longi % 2) == 1)
		c = ((longi + 1) / 2);

	for (a = c; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
