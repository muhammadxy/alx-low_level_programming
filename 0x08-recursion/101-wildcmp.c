#include "main.h"
/**
* length - returns comparing of string
* @s1: string
* @s2:string
* Return: integer length
*/
int wildcmp(char *s1, char *s2)
{
int flag = 0;
while (*s1 != '\0' && *s2 != '\0')
{
if (*s1 != *s2)
{
flag = 1;
}
s1++;
s2++;
}
if (flag == 0)
return (0);
else
return (1);
}
