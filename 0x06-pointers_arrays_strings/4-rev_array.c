#include "main.h"

/**
 * reverse_array - reverse array
 * @a:array
 * @n:integer
 * Return:void
 */
void reverse_array(int *a, int n)
{
int i, swap;
for (i = 0; i < (n / 2); i++)
{
swap = a[i];
a[i] = a[(n - 1) - i];
a[(n - 1) - i] = swap;
}
}
