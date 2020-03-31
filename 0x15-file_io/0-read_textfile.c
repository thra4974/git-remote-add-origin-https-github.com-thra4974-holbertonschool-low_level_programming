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
	char *buf[letters];

	if (filename == NULL)
		return (0);
	filedesc = open(filename, O_CREAT | O_RDWR);

	read(filedesc, buf, letters);

	return (write(STDOUT_FILENO, buf, letters));

	close(filedesc);
	return (0);
}
