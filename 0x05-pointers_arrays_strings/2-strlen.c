#include "holberton.h"
/**
* _strlen - returns length of a string
* @s: declaration of *s
* Return: 0
*/
int _strlen(char *s)
(
int i;

while (*(s + i))
{
i++;
}
return (i);
}
