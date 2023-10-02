#include"main.h"
#include <stdlib.h>

/**
 * read_textfile - A function that reads a text file and prints
 * it to the standard output.
 * @letters: Number of letters to be read and printed
 * @filename: Name of the files to read
 * Return: Actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t r;
	ssize_t w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);
}
