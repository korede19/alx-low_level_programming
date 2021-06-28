#include "holberton.h"
/**
* print-rev - function that prints a string
* @s: declaration of s
* Return: 0
*/
void print_rev(char *s)
{
int c;
for (c = 0; s[c] != 0; c++)
{
}
for (c = c - 1; c >= 0; c--)
_putchar(s[c]);
_putchar('\n');
}
