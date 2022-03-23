#include "main.h"
/**
 * reverse_array - function to reverse content of an array
 *
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, end, holder;

	end = n - 1;
	for (i = 0; i < (n / 2); i++, end--)
	{
		holder = a[i];
		a[i] = a[end];
		a[end] = holder;
	}
}
