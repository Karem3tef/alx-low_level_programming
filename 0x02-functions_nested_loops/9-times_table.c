#include "main.h"



void times_table(void)
{
int row, col, num;
for (row = 0; row <= 9; row++)
{
_putchar('0');
for (col = 0; col <= 9; col++)
{
_putchar(',');
_putchar(' ');
num = col * row;
if (num < 10)
{
_putchar(' ');
_putchar(num + '0');
}
else
{
_putchar(num / 10 + '0');
_putchar(num % 10 + '0');
}

}
_putchar('\n');
}
}
