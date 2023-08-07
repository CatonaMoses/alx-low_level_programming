#include "main.h"

/**
 * append_text_to_file -it then appends text at  end of a file.
 * @filename: pointer to the name of the file that is created
 * @text_content: string that is to add to end of the file.
 * still adding
 * continuing..
 * Return:when function fails or filename is NULL and void - -1.
 *        when file doesn't exist and  the user lacks write permissions - -1.
 * never the less it is - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
