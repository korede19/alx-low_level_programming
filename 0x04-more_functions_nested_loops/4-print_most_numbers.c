#include "holberton.h"
/**
 * print_most_numbers - a function that prints the numbers exept 2 and 4
 * Return: nothing
 */
void print_most_numbers(void)
{
int a;

for (a = 0; a < 10; a++)
{
if (a != 2 && a != 4)
{
_putchar(a + '0');
}
}
_putchar('\n');
}
