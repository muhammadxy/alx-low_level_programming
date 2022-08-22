#include "main.h"
/**
* create_file - function creates a file
*
*@filename: char * to name of file being read
*@text_content: char * to NULL terminated string to write
*
* Return:1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int fd, len, writed;
if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
if (fd == -1)
return (-1);
if (text_content == NULL)
{
close(fd);
return (1);
}
for (len = 0; text_content[len] != '\0'; len++)
;
writed = write(fd, text_content, len);
if (writed < 1)
return (-1);
close(fd);
return (1);
}
