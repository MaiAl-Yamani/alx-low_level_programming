#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard out
 * @filename: name of file that the function will read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buf;
	int letters_len, wr_len;

	if (filename == NULL || letters == 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		free(buf);
		return (0);
	}
	letters_len = read(f, buf, letters);
	if (letters_len == -1)
	{
		free(buf);
		close(f);
		return (0);
	}
	wr_len = write(STDOUT_FILENO, buf, letters_len);
	free(buf);
	close(f);
	if (wr_len != letters_len)
		return (0);
	return (letters_len);
}
