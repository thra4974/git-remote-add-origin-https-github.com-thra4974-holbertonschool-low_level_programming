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
	char *buf = malloc(sizeof(size_t) * letters);
	ssize_t rd;

	if (filename == NULL)
		return (0);
	filedesc = open(filename, O_CREAT | O_RDWR);
	if (filedesc == '\0')
		return (0);
	rd = read(filedesc, buf, letters);
	write(STDOUT_FILENO, buf, letters);
	close(filedesc);
	return (rd);
	return (0);
}
