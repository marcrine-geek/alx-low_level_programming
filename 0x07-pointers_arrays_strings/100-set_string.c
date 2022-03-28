#include "main.h"
/**
 * set_string - function that sets the value of a pointer to a char
 *
 * @s: pointer to change
 * @to: value to change to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
