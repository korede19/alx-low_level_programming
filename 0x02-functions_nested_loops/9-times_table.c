#include "holberton.h"
/**
* times_table - discription around the corner
* Return: 0
*/
void times_table(void)
{
int row, column, answer;
for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
answer = row * column;
if (column != 0)
{
_putchar(',');
_putchar(' ');
if (answer <= 9)
{
_putchar(' ');
}
}
if (answer > 9)
{
_putchar(answer / 10 + '0');
}
_putchar(answer % 10 + '0');
}
_putchar('\n');
}
}
