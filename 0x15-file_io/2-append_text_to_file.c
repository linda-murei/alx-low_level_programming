#include "main.h"
/**
 * append_text_to_file-function that appends text at the end of a file.
 * @filename:pointer to the name of the file
 * @text_content:NULL terminated string to add at the end of the file
 * Return:1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int a, w, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (a = 0; text_content[i];)
			i++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	w = write(a, text_content, i);

	if (a == -1 || w == -1)
		return (-1);

	close(a);

	return (1);
}
