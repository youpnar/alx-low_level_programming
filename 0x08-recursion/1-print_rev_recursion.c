#include <stdio.h>

/**
* _print_rev_recursion - Prints a string followed by a new line
* @s: string
*
* Return: On success 1.
* On error, -1 is returned, and erro is set appropriately.
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	return;
	_print_rev_recursion(s + 1);
	putchar(*s);
}
