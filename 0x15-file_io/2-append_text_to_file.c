#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file to append text to
 * @text_content: string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t content_len, wr_len;
	char *ptr;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);

	for (content_len = 0, ptr = text_content; *ptr; ptr++)
		content_len++;
	wr_len = write(f, text_content, content_len);

	if (close(f) == -1 || wr_len != content_len)
		return (-1);
	return (1);
}
