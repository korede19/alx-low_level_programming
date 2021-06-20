#include <stdio.h>
/**
* main - Entry point
*
* Description: using the main function
* this program prints "combinations of two digits"
* Return: 0
*/
int main(void)
{
int i, j;
for (i = 0; j < 10; i++)
{
for (j = 0; j < 10; j++)
{
if (i != j && i < j)
{
putchar (i + 48);
putchar (j + 48);
if (!((i == 8) && (j == 9)))
{
putchar (',');
putchar (' ');
}
}
}
}
putchar ('\n');
return (0);
}
