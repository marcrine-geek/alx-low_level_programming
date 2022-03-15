#include "main.h"
/**
 * main entry point.
 *
 * Return 0 if success.
 */
int print_last_digit(int x)
{
	int l;

	l = (x % 10);
	if (l < 0)
	{
		l = (-1 * l);
	}
	_putchar(l + '0');
	return (l);
}
