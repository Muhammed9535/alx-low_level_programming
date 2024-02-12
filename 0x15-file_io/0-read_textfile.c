#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
/**
  * read_textfile - a function that reads a text file and prints it to
  * the POSIX standard output.
  * @filename: name of file
  * @letters: number of character
  * Return: actual number of letters it could read and print
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters + 1);
	if (buffer == NULL)
		return (0);

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		free(buffer);
		return (-1);
	}

	write(STDOUT_FILENO, buffer, bytes_read);

	if (close(fd) == -1)
	{
		return (1);
	}
	return (bytes_read);
}
