#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include "main.h"
#include <unistd.h>
#include <sys/stat.h>

/**
 * read_textfile - reads a text file and prints
 *		it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: 0 if it fails, Else actual number of
 *		letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int pq;
	ssize_t r, w;
	char *buffer;

	if (filename == NULL)
		return (0);
	pq = open(filename, O_RDONLY);
	if (pq == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(pq);
		return (0);
	}
	r = read(pq, buffer, letters);
	close(pq);
	if (r == -1)
	{
		free(buffer);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	if (r != w)
		return (0);
	return (w);
}
