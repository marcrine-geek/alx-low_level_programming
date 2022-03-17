#include "main.h"
/**
 * Description: main - drawing straight line on the terminal
 *
 * Return: straight line
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
