#include "main.h"
/**
 * _strlen - finds the length of a string
 * @s: string to be counted
 * Return: length of the string
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
