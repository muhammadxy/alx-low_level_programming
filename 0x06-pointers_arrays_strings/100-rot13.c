#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*ROT13
*
**/
char  *rot13_1(char *start)
{
int i, len = strlen(start);
for (i = 0; i < len; i++)
{
if ((*start + i) >= 'a' && *(start + i) < 'n')
|| (*(start + i) >= 'A' && *(start + i) < 'N'))
*(start + i) += 13;
else if ((*(start + i) > 'm' && *(start + i) < 'z') ||
(*(start + i) > 'M' && *(start + i) < 'Z'))
*(start + i) -= 13;
}
return (0);
}
