#include <stdio.h>

/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints "the info below"
* Return: 0;
*/
int main(void)
{
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));  
printf("Size of size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n"
, (unsigned long)sizeof(float));
printf("Size of a float: %lu byte(s)\n"
, (unsigned long)sizeof(float));
return (0)
}
