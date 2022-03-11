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
<<<<<<< HEAD
	putchar('\n');
=======
	putchar('\n);
>>>>>>> ac4066fa5d0666b0c6f3ccb06f7a2fb182fecd48
	return (0);
}
