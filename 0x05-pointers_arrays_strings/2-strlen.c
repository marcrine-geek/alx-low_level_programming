#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 *
 * @s: a string
 * Return: @i the length of a string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
