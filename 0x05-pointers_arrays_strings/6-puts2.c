#include "main.h"
/**
 * puts2 - print only one character out of two
 * starting with the first one
 * @str: input
 * Return: void
 */
void puts2(char *str)
{
	int longi = 0;
	int j = 0;
	char *k = str;
	int o;

	while (*k != '\0')
	{
		k++;
		longi++;
	}
	j = longi - 1;
	for (o = 0 ; o <= j ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}

