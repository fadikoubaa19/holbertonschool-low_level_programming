*#include "holberton.h"
/**
* append_text_to_file - appends text
* @filename:var
* @text_content:var
* Return: 0
*/
int append_text_to_file(const char *filename, char *text_content)
{
int f = 0, b = 0, c = 0;
if (!filename)
{
return (-1);
}
f = open(filename, O_WRONLY | O_APPEND);
if (f == -1)
{
return (-1);
}
if (text_content)
{
while (text_content[b])
b++;
c = write(f, text_content, b);
if (c == -1)
return (-1);
}
close(f);
return (1);
}
