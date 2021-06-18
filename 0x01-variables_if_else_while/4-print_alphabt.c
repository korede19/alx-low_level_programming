#include <stdio.h>
/**
* main - print alphabelts execpt e and q
*
* Description: using the main function
* this program prints "a-z execpt e and q"
*/
int main(void)
{
char ch;
 for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
