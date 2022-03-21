#include "main.h"
/**
 * puts2 - function to print characters of a string
 *
 * @str: string to be printed
 */
void puts2(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
