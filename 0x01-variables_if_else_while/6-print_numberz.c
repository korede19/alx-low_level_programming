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
char ch = '0';
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
