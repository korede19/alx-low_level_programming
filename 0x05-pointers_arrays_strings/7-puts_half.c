#include "holberton.h"
/**
* puts_half - function that prints half a string
* @str: declaraton of n
* Return: 0
*/
void puts_half(char *str)
{
int c, a;
char l;

for (c = 0; str[c] != 0; c++)
{
}
if (c % 2 == 0)
{
for ((a = c / 2); str[a] != 0; a++)
{
l = str[a];
_putchar(l);
}
}
else
{
for ((a = (c - 1) / 2); str[a] != 0; a++)
{
l = str[a];
_putchar(l);
}
}
_putchar('\n');
}
