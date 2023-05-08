#include "main.h"
/**
 * read_textfile - reads a text file, prints it to the POSIX standard output.
 * @filename:name of file to be read
 * @letters:number of letters to read and print.
 * Return:actual number of letters it could read and print
 * else 0 if filename is NULL or cannot be opened.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t w, sz;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	sz = read(fd, buf, letters);
	buf[sz] = '\0';

	w = write(STDOUT_FILENO, buf, sz);
	close(fd);
	free(buf);
	return (w);
}

