#include "main.h"
/**
 * Description: print a number
 *
 * Return: 0 Always
 */
void print_number(int n)
{
	unsigned int num = n;

	 /* print '-' in front of -ve integers and ensure n is +ve */
	if (n < 0)
	{
		_putchar('-');
		num *= -1;
	}
	/* if num has more than 1-digit, print preceding digit first */
	if (num >= 10)
	{
		print_number(num / 10);
	}
	_putchar('0' + (num % 10));
}
