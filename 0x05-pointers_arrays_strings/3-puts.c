#include "main.h"
/**
 * _puts - a function that prints a string
 *
 * @str: string to be printed
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
