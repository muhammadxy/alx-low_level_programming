#include "main.h"
#include<stdio.h>
/**
* main - function prints number of args passed in it
*
*@argc: int
*@argv: char * pointer to array
*
* Return: 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
