#include "main.h"
/**
* append_text_to_file - function appends text to end of file
*
*@filename: char * to name of file being read
*@text_content: char * to NULL terminated string to write
*
* Return:1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, len, writed;
if (filename == NULL)
return (-1);
fd = open(filename, O_APPEND | O_WRONLY);
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
