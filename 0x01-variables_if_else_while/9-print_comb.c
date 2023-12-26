#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
i = 48;
while (i <= '9')
{
putchar(i);
if (i < '9')
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
