#include "main.h"
/**
 * puts_half - function to print half characters of a string
 *
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	for (j = 0; str[j] != 0; j++)
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = (i / 2) + 1; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
