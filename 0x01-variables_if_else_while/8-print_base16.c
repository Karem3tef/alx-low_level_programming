#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
i = 0;
while (i <= 15)
{
if (i <= 9)
putchar(i + 48);
else
putchar(i + 97 - 10);
i++;
}
putchar('\n');
return (0);
}
