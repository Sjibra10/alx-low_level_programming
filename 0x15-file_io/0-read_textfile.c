#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - Read a text file and print it to STDOUT.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of bytes read and printed (w).
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, w, t;

	if (filename == NULL)
		return (0);
	/**Open the file for reading*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/**Allocate memory for the buffer*/
	buf = malloc(letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	/**Read from the file*/
	t = read(fd, buf, letters);
	if (t == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	/**Write to STDOUT*/
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
return (w);
}
