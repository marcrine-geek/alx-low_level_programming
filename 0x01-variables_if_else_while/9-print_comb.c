#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 if success
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
		putchar(',');
		putchar(' ');
		if (x == 9)
		{
			putchar(x + '0');
			putchar('\n');
		}
	}
	return (0);
}

