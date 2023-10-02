#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file or files that should print to STDOUT.
 * @filename: text file being read by the code.
 * @letters: number of letters to be read for me.
 * Return: w- actual number of byte to read
 *        0 when function does not work or filename is NULL.
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
