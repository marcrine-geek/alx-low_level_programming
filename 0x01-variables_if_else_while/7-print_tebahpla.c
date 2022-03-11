#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: 0 if success
 */
int main(void)
{
	int x;

	for (x = 'Z'; x >= 'A'; x--)
	{
		putchar(tolower(x));
	}
	return (0);
}
