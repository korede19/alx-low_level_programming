#include "holberton.h"
/**
* puts_half - function that prints half a string
* @str: declaraton of n
* Return: 0
*/
void puts_half(char *str)
{
int l, charsToPrint = 0;

while (*(str + l) != '\0')
l++;
if (!(l % 2))
charsToPrint = (l - 1) / 2;
else
charsToPrint = l / 2;
charsToPrint++;
while (charsToPrint < l)
_putchar
(*(str + charsToPrint++));
_putchar('\n');
}
