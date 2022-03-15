#include "main.h"
/**
 * Description: main - print times table starting from integer n
 *
 * Return: Always 0
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		_putchar(' ');
	}
	else
	{
		int x, y, z;

		for (x = 0; x <= n; x++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (y = 1; y <= n; y++)
			{
				z = x * y;
				if ((z / 10) > 0)
				{
					_putchar((z / 10) + '0');
				}
				else
				{
					_putchar(' ');
				}
				_putchar((z % 10) + '0');
				if (y < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
