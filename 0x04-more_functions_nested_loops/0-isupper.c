#include "holberton.h"
/**
* _isupper - functions that checks for uppercase character
* @c: the int for parameters of the functions
* Return: 0
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
return (0);
}
