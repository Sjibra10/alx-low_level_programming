#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * create_file - Creates a file and writes text content to it.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1. Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		/**Calculate the length of the text content*/
		for (len = 0; text_content[len]; len++)
			;
		/**Open the file, read & create permission doesnt exist.*/
		/**Set file permissions to 0600 (only owner can read and write*/
		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		if (fd == -1)
			return (-1);

		/**Write the text content to the file*/
		w = write(fd, text_content, len);
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
		close(fd);
	}
	else
	{
		/**If text_content is NULL, create an empty file.*/
		fd = open(filename, O_CREAT | O_TRUNC, 0600);
		if (fd == -1)
			return (-1);
		close(fd);
	}
return (1);
}
