#include "holberton.h"
/**
 * append_text_to_file - append text
 * @filename: var 
 * @text_content:var
 * Return:zero
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int wr = 0, len;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_RDWR | O_APPEND, 0600);

	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		wr = write(f, text_content, len);

		if (wr == -1)
			return (-1);
	}
	close(f);
	return (1);
}
