#include "holberton.h"
/**
* _strlen - returns length of a string
* @s: declaration of *s
* Return: 0
*/
int _strlen(char *s)
(
int c;

while (*(s + c))
{
c++;
}
return (c);
}
