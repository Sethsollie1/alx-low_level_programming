#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of the file
 * @text_content: the NULL-terminated string to add to the file
 *
 * Return: 1 on success else -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[bytes_written])
			bytes_written++;

		if (write(fd, text_content, bytes_written) != bytes_written)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

