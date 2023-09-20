#include "main.h"

/**
 * _strcat - concat 2 string
 * @dest:char
 * @src:char
 * Return:char
 */

char *_strcat(char *dest, char *src)
{
char *str = dest;
int i, f;
for (i = 0; dest[i] != '\0'; i++)
str[i] = dest[i];
for (f = 0; src[f] != '\0'; f++, i++)
str[i] = src[f];
return (str);
}
