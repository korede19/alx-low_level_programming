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
int a;
for (a = '0'; a <= '9'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
