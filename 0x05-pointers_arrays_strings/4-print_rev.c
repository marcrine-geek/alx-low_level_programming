#include "main.h"
/**
 * print_rev - function to print string in reverse
 *
 * @s: string to reverse
 */
void print_rev(char *s)
{
	int i;

	int j;

	i = 0;
	for (j = 0; s[j] != 0; j++)
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
