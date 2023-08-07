#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- do not forget to read text file print to STDOUT.
 * @filename:the text file being read or saved on my project
 * @letters: numbers of letters that is read or saved
 * still saving
 * Return: w- actual number of bytes read and printed of the codes
 *0 when function it has  failed or filename is NULL,not working
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
