#include <stdio.h>

/**
* factorial - Prints a string followed by a new line
* @n: Integer
*
* Return: On success 1.
* On error, -1 is returned, and erro is set appropriately.
*/
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	else
	return (n * factorial(n - 1));
}
