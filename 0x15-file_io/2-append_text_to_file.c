#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
/**
  * append_text_to_file - a function that appends text at the end of a file
  * @filename: name of file
  * @text_content: content of text
  * Return: 1 on success and -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byte_data;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		byte_data = write(fd, text_content, strlen(text_content));
		if (byte_data == -1)
		{
			close(fd);
			return (-1);
		}
	}

	if (close(fd) == -1)
		return (-1);
	return (1);
}

