#include <stdio.h>
/**
* main - print alphabelts execpt e and q
*
* Description: using the main function
* this program prints "a-z execpt e and q"
* Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
/* the code */
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
