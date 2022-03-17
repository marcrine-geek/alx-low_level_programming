#include "main.h"
#include <stdio.h>
/**
 * Description: main - printing numbers from 1 to 100
 *
 * Return: 0 Always;
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (x % 5 == 0)
		{
			printf(" Buzz");
		}
		else if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		printf("%d ", x);
	}
	printf("\n");
	return (0);
}
