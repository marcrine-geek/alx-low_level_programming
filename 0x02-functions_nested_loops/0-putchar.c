#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 if success
 */
int main(void)
{
	char *x = "_putchar";

	while (*x)
	{
		_putchar(*x);
		x++;
	}
	_putchar('\n');
	return (0);
}
