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
	char *buf;

	if (filename == NULL)
		return (-1);
	filedesc = open(filename, O_CREAT | O_RDWR, 0600);

	if (filedesc == -1)
		return (-1);
	buf = malloc(sizeof(text_content));
	if (buf == NULL)
	{
		close(filedesc);
		return (-1);
	}
	write(filedesc, buf, *text_content);
	cl = close(filedesc);
	if (cl == -1)
		return (-1);
	close(filedesc);
	free(buf);
	return (1);
}
