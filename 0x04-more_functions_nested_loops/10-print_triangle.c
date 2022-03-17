#include "main.h"
/**
 * Description: main - triangle
 *
 * Return: Always 0
 */
void print_triangle(int size)
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
			for (y = size; y > 0; y--)
			{
				if (y <= x)
				{
					_putchar('#');
				}
				else{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
