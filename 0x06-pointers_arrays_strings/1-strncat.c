#include "main.h"

/**
* _strncat - concatenate strings, defining the size of second string.
* @dest: string with concatenation
* @src: string to be concatenated
* @n: size of second string
* Return: Always 0.
*/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
