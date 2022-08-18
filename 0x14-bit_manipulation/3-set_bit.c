#include "main.h"
/**
* set_bit - function sets the value of a bit to 1 at a given index
*
*@n: unsigned long int ptr number input
*@index: unsigned int index position
*
* Return: 1 if successful, -1 if error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1 << index;
while (index < 64)
{
*n = (*n & ~mask) | ((1 << index) & mask);
return (1);
}
return (-1);
}
