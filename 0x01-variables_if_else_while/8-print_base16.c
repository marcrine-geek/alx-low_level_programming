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

	int y;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	for (y = 'a'; y < 'g'; y++)
	{
		putchar(tolower(y));
	}
	putchar('\n');
	return (0);
}
