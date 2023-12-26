#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char i;
i = 'a';
while (i >= 'z')
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
