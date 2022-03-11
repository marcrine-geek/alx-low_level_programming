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

	for (x = 'A'; x <= 'Z'; x++)
	{
		if (x != 'Q' && x != 'E')
			putchar(tolower(x));
	}
	return (0);
}
