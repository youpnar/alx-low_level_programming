#include "main.h"
/**
* _strncpy - concatenate strings, defining the size of second string.
* @dest: string with concatenation
* @src: string to be concatenated
* @n: size of second string
* Return: Always 0.
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
