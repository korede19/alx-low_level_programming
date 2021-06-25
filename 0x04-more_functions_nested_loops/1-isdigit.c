#include "holberton.h"
/**
* _isdigit - function that checks for uppercase character
* @c: int for the parameter of the function
* Return: 0
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
return (0);
}
