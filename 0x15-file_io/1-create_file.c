#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
/**
  * create_file - a function that creates a file.
  * @filename: namee of file
  * @text_content: content of file
  * Return: 1 on success, -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_read;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT |O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_read = write(fd, text_content, strlen(text_content));
		if (bytes_read == -1)
		{
			close(fd);
			return (-1);
		}
	}

	if (close(fd) == -1)
	{
		return (-1);
	}

	return (1);
}
