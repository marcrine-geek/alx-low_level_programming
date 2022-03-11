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
		putchar((x / 10) + '0');
		putchar((x % 10) + '0');
		if (x != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}

