#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int content_len = 0, wr_len = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (content_len = 0, ptr = text_content; *ptr; ptr++)
			content_len++;
		wr_len = write(f, text_content, content_len);
	}
	if (close(f) == -1 || wr_len != content_len)
		return (-1);
	return (1);
}
