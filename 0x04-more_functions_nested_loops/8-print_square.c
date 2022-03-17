#include "main.h"
/**
 * Description: main -  squares of integers
 *
 * Return: 0 always
 */
void print_square(int size)
{
	int x;

	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

