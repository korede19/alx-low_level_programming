#include <stdio.h>
/**
* main - prints numbers
*
* Description: using the main function
* this program prints "numbers"
* Return: 0
*/
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
