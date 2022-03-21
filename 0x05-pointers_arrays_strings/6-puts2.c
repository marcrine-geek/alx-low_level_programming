#include "main.h"
/**
 * puts2 - function to print characters of a string
 *
 * @str: string to be printed
 */
void puts2(char *str)
{
	int size, value;

	size = 0;
	for (value = 0; str[value] != 0; value++)
	{
		size++;
	}
	for (value = 0; value < size; value += 2)
	{
		_putchar(str[value]);
	}
	_putchar('\n');
}
