#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns newstr pointer which is a duplicate of str
 * @str: pointer to string
 *
 * Return: a pointer to a new string
 */
char *_strdup(char *str)
{
	char *newstr;
	unsigned int i;

	newstr = malloc((strlen(str) + 1) * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < (strlen(str)))
	{
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
