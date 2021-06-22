#include "holberton.h"
/**
* main - print alphabet
*
* Description - function to print abc
* prints "abc..."
* Return: 0
*/
void print_alphabet(void)
{
char c;
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
}
