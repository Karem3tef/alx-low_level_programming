#include "main.h"

/**
 * more_numbers - nmbr fct
 * Bwave ICT file
 * Return: no return
 */

void more_numbers(void)
{
int i, n;
for (i = 1; i <= 10; i++)
{
for (n = 0; n <= 14; n++)
{
if (n >= 10)
_putchar('1');
_putchar((n % 10) + '0');
}
_putchar('\n');
}
}
