#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: pointer to filename
 * @text_content: pointer to NULL term string to write
 * Return: 1 upon success, -1 upon failure
 */

int create_file(const char *filename, char *text_content)
{
	int filedesc;
	int cl;
	size_t len = 0;
	ssize_t wr;

	if (filename == NULL)
		return (-1);
	filedesc = open(filename, O_CREAT | O_RDWR, 0600);

	if (filedesc == -1)
		return (-1);
	if (text_content == NULL)
		return (-1);
	while (text_content[len] != '\0')
		len++;
	wr = write(filedesc, text_content, len);
	if (wr == -1)
		return (-1);
	cl = close(filedesc);
	if (cl == -1)
		return (-1);
	close(filedesc);
	return (1);
}
