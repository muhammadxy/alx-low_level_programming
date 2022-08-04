#ifndef VARF_H
#define VARF_H
#include<stddef.h>
#include<stdarg.h>
#include<string.h>
/**
* struct dog - contains data for dog
* @name: char *
* @age: float
* @owner: char *
*
*/
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
