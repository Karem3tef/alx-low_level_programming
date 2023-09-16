#include "main.h"

/**
 * print_diagonal - printing lines diagonal
 * @n: input variable
 *
 * Return: void
 */
void print_diagonal(int n)
{
int i, a;
if (n > 0)
{
for (i = n; i >= 1; i--)
{
for (a = n; a > i; a--)
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
else
_putchar('\n');
}
