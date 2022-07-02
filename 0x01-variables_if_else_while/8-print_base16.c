#include <stdio.h>
/**
* main - print the letters of the alphabet
*
* Description: print the letters of the alphabet in reverse
*
* Return: Always 0 (Success)
*/
int main(void)
{int al, an;
for (al = '0'; al <= '9'; al++)
putchar(al);
for (an = 97; an <= 102; an++)
putchar(an);
putchar('\n');
return (0);
}
