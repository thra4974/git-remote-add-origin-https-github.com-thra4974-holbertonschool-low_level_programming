#include "holberton.h"

/**
 * copy_srcfile_to_target - copies contents from src file into target file
 * @srcname: pointer name of srcfile
 * @targetname: pointer to name of target file
 * Return: 1 if successful or -1 if function fails
 */

int copy_srcfile_to_target(const char *srcname, const char *targetname, char *text_context)
{
	int *srcfd, *tgtfd;
	int clsrc, cltgt;
	ssize_t wrsrc, rdsrc;
	char *buf[1024];

	srcfd = open(srcname, O_RDWR, 0554);
	tgtfd = open(targetname, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	//Exit 98; (srcfd, srcname)
	if (tgtfd == -1)
		return (-1);
	
	while ((rdsrc = read(srcfd, buf, 1024)) > 0)
	{
		if (rdsrc == -1)
		{
			dprintf(
		}
		wrsrc = write(tgtfd, buffer, rdsrc);
		if (wrsrc == -1)
		{
			//close;
			return (-1);
		}
	}

	//exit 98;
	clsrc = close(srcfd);
	cltgt = close(tgtfd);
}

/**
 * main - desciption for main
 * @argc: total number of arguments
 * @argv: pointer to argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *srcname, targetname;
	int cpy;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}
	srcname = argv[1];
	targetname = argv[2];

	if (srcname == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", srcname);
		exit(98);
	}
	cpy = copy_srcfile_to_target;
	if (cpy == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", targetname);
		exit(99);
	}
	return (0);
}
