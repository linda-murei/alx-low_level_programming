#include "main.h"
/**
 * create_file- function that creates a file.
 * @filename:name of file to be created
 * @text_content:NULL terminated string to write to the file
 * Return:1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, x = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (x = 0; text_content[x];)
			x++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, x);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);

}
