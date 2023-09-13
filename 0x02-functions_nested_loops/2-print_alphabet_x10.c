#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */

void print_alphabet_x10(void)
{
int f;
char i;
for (f = 1; f <= 10; f++)
{
for (i = 'a'; i <= 'z'; i++)
_putchar(i);

_putchar('\n');
}
}
