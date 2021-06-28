#include "holberton.h"
/**
* _strlen - returns length of a string
* @s: declaration of *s
* Return: 0
*/
int _strlen(char *s)
{
int counter;

counter = 0;
while (*(s + counter) != '\0')
counter++;
return (counter);
}
