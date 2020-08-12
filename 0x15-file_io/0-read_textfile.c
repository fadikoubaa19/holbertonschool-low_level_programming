#include "holberton.h"
/**
* read_textfile - reads a text file
* @filename: va
* @letters: var
* Return: 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int f;
ssize_t b, c;
char *size;
if (!filename)
{
return (0);
}
f = open(filename, O_RDONLY);
if (f == -1)
{
return (0);
}
size = malloc(sizeof(char) * (letters));
if (!size)
{
return (0);
}
b = read(f, size, letters);
c = write(STDOUT_FILENO, size, b);
close(f);
free(size);
return (c);
}
