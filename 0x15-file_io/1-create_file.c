#include "holberton.h"
/**
* create_file - creates a file
* @filename: var
* @text_content: var
* Return: 0 always
*/
int create_file(const char *filename, char *text_content)
{
int f = 0, b = 0, c = 0;
if (!filename)
{
return (-1);
}
f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (f == -1)
{
return (-1);
}
if (!text_content)
text_content = "";
while (text_content[b])
b++;
c = write(f, text_content, b);
if (c == -1)
{
return (-1);
}
close(f);
return (1);
}
