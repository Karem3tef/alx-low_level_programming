#include "main.h"

/**
 * print_square - prints a square of size size
 * @size: size of the square
 *
 * Return: void
 */


void print_square(int size)
{
int row, col;
if (size > 0)
{
for (row = 0; row < size; row++)
{
for (col = 0; col < size; col++)
_putchar ('#');
_putchar('\n');
}
}
else
_putchar('\n');
}
