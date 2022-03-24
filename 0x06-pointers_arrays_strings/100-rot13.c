#include "main.h"
/**
 * rot13 - function to encode a string
 *
 * @s: string to encode
 * Return: string s
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (((s[i] >= 'a') && (s[i] <= 'm')) || ((s[i] >= 'A') && (s[i] <= 'M')))
		{
			s[i] += 13;
		}
		else if (((s[i] >= 'n') && (s[i] <= 'z'))
				|| ((s[i] >= 'N') && (s[i] <= 'Z')))
		{
			s[i] -= 13;
		}
	}
	return (s);
}
