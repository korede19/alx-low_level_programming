#include "holberton.h"
/**
* _puts - function peints a string
* @str: declaration of *str
* Return: 0
*/
void _puts(char *str)
{
int c;

for (c = 0; str[c] != 0; c++)
{
_putchar(str[c]);
}
_putchar('\n');
}
