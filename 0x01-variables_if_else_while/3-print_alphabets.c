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
		putchar(tolower(x));
	}
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(toupper(x));
	}
	return (0);
}
