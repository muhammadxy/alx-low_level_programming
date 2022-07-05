#include "main.h"
/**
* times_table - prints the 9 times table
*
* Description: prints the 9 times table
*
* Return: void
*/
void times_table(void)
{
int col, row, mul;
for (col = 0; col < 10; col++)
{
for (row = 0; row < 10; row++)
{
mul = col * row;
if (mul > 9)
{
_putchar(',');
_putchar(' ');
_putchar((mul / 10) + '0');
_putchar((mul % 10) + '0');
}
else
{
if (row != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar(mul + '0');
}
}
_putchar('\n');
}
}
