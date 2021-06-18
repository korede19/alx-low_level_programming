#include <stdio.h>
/**
* main - print if the alphabet in lowercase
*
* Description: using the main function
* this program prints "alphabet a-z"
* Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n')
return (0);
}
