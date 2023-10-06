#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_READ "Error: Can't read from file %s\n"
#define ERR_WRITE "Error: Can't write to %s\n"
#define ERR_CLOSE "Error: Can't close fd %d\n"

/**
 * main - program that copies the content of a file to another
 * @ac: number of command line arguments
 * @av: command line argument values
 *
 * Return: 1 on success, 0 on failure
 */
int main(int ac, char **av)
{
	int fd_from = 0, fd_to = 0;
	ssize_t bytes;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, ERR_READ, av[1]), exit(98);
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, ERR_WRITE, av[2]), exit(99);
	while ((bytes = read(fd_from, buf, 1024)) > 0)
		if (write(fd_to, buf, bytes) != bytes)
			dprintf(STDERR_FILENO, ERR_WRITE, av[2]), exit(99);
	if (bytes == -1)
		dprintf(STDERR_FILENO, ERR_READ, av[1]), exit(98);
	fd_from = close(fd_from);
	fd_to = close(fd_to);
	if (fd_from)
		dprintf(STDERR_FILENO, ERR_CLOSE, fd_from), exit(100);
	if (fd_to)
		dprintf(STDERR_FILENO, ERR_CLOSE, fd_to), exit(100);
	return (1);
}
