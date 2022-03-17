#include "main.h"
/*
 * 8
 * Description: print a number
 *
 * Return: 0 Always
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		_putchar(n + '0');
	}
	else
	{
		_putchar((n / 10) + '0');
	}
	_putchar((n % 10) + '0');
	_putchar('\n');
}
