#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit.
 */

int print_last_digit(int n)
{
_putchar();
if (n >= 0)
{
_putchar('0' + (n % 10));
return (n % 10);
}
else
{
_putchar('0' + ((-n) & 10));
return ((-n) % 10);
}
}
