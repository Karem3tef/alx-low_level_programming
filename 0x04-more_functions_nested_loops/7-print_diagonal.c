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
for (i = 1; i <= n; i++)
{
for (a = i; a <= n; a++)
_putchar(' ');
}
_putchar(92)
_putchar('\n');
}
else
_putchar('\n');
}
