#include "holberton.h"
/**
* swap_int - swaps the values of two integers
* @a: declaration of a
* @b: declaration of b
* Return: 0
*/
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
