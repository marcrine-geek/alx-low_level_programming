#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 if success
 */
void print_alphabet_x10(void)
{
	int x, y;

	y = 0;

	while (y < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		y++;
		_putchar('\n');
	}
}
