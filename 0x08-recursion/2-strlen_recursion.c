#include <stdio.h>

/**
* _strlen_recursion - Prints the lenght of a String
* @s: String
*
* Return: On success 1.
* On error, -1 is returned, and erro is set appropriately.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursion(s + 1));
}
