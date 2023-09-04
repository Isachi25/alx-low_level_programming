#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to a STDOUT
 * @filename: textfile to read
 * @letters: The number of letters to read
 *
 * Return: w - actual number of bytes read and printed
 * 0 when the filename is NULL/function fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
