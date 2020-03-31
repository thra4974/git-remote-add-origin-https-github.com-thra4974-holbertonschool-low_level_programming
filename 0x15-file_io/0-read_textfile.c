#include "holberton.h"

/**
 * read_textfile - reads text file and prints to POSIX stdout
 * @filename: pointer to file
 * @letters: numbe rof letters read and printed
 * Return: # of letters it could read and print or 0 upon fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int filedesc;
	char *buf;
	ssize_t rd;
	ssize_t wr;
	int cl;

	if (filename == NULL || letters <= 0)
		return (0);
	filedesc = open(filename, O_CREAT | O_RDWR);
	if (filedesc == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(filedesc);
		return (0);
	}
	rd = read(filedesc, buf, letters);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}
	cl = close(filedesc);
	if (cl == -1)
	{
		free(buf);
		return (0);
	}
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1 || wr != rd)
	{
		free(buf);
		return (0);
	}
	close(filedesc);
	free(buf);
	return (wr);
}
