#include "main.h"
#include<stdio.h>
/**
* main - function prints name of itself
*
*@argc: int
*@argv: char * pointer to array
*
* Return: 
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
