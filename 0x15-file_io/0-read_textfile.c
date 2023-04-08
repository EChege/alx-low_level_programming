#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- reads the text file print to STDOUT.
 * @filename: text file that is being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t z;
	ssize_t y;
	ssize_t x;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	z = read(x, buf, letters);
	y = write(STDOUT_FILENO, buf, z);
	free(buf);
	close(x);
	return (y);
}
