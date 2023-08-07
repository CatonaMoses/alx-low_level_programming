#include "main.h"

/**
 * create_file - it then Creates a file.
 * @filename:pointer to name of the file that is being created.
 * @text_content:pointer to string to write to file being created
 * Still writing
 *Doing still the same
 * Return:when the function fails - -1.
 * if anything else then it is - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
