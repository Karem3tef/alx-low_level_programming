#include "main.h"

/**
 * print_triangle - entry point
 * owned by Bwave/Bright Daniel
 * Description: Prints diagonals
 *@size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
int i, f, h;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (f = i ; f < size ; f++)
_putchar(' ');
for (h = 1; h <= i; h++)
_putchar('#');
_putchar('\n');
}
}
else
_putchar('\n');
}
