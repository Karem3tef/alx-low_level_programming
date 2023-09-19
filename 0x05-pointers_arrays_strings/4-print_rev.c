#include "main.h"

/**
* print_rev -> printing a string in reverse
* @s: the string to be printed in rev
*/

void print_rev(char *s)
{
int i;
int a;
for (a = 0; s[a] != '\0'; a++)
{}

for (i = a; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}


