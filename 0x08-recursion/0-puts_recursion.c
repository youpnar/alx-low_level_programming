#include <stdio.h>

void _puts_recursion(char *s)
{
    if (*s == '\0') {
        putchar('\n');  // Print a newline when the end of the string is reached
        return;
    }

    putchar(*s);  // Print the current character
    _puts_recursion(s + 1);  // Move to the next character and recurse
}

int main()
{
    char str[] = "Hello, world!";
    _puts_recursion(str);

    return 0;
}
