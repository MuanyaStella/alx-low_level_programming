#include "main.h"
#include <stdio.h>

/**
 * read_textfile - function that reads a text file and prints it to POSIX stdout.
 * @filename: Pointer to the name of the file.
 * @letters: number of letters the function should read and print.
 *
 * Return: 0 -  If the function fails or filename is NULL or the file`
 * cannot be opened or read, or does not write expected amount of bytes.
 * Otherwise return the actual number of letters the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);
	return (w);
}
