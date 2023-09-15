#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of
 *              Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
int mou, hou;
for (hou = 0; hou <= 23; hou++)
{
for (mou = 0; mou <= 60; mou++)
{
_putchar(hou / 10 + '0');
_putchar(hou % 10 + '0');
_putchar(':');
_putchar(mou / 10 + '0');
_putchar(mou % 10 + '0');
_putchar('\n');
}
}
}
