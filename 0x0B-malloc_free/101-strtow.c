#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - splits a string into words.
 * @str: input string to be split
 *
 * Return:  pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **f_ptr;
	int j, k;
	unsigned int i;

	if (str == NULL || str == 0)
	{
		return (NULL);
	}
	f_ptr = (char **)malloc(2 * strlen(str));
	if (f_ptr == NULL)
	{
		free(f_ptr);
		return(NULL);
	}
	k = 0;
	j = 0;
	for (i = 0; i < strlen(str) ; i++)
	{
		f_ptr[i][j] = str[k];
		k++;
	}
	f_ptr[i][j] = '\0';
	return (f_ptr);
}
