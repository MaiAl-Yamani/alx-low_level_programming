#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: input string to be split
 *
 * Return:  pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **f_ptr;
	int i, j, k;

	if (str == NULL || str == "")
	{
		return (NULL);
	}
	f_ptr = (char **)malloc();
	if (f_ptr == NULL)
	{
		free(f_ptr);
		return(NULL);
	}
	k = 0;
	for (i = 0; i < ; i++)
	{
		for (j = 0; j < strlen(str[k]); j++)
		{
			f_ptr[i][j] = str[k];
		}
		f_ptr[i][j] = '\0';
	}
	f_ptr[i][j] = '\0';
	return (f_ptr);
}
