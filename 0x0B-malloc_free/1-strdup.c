#include "main.h"
#include <stdlib.h>
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

	newstr = malloc((sizeof(str) + 1) * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < (sizeof(str)))
	{
		newstr[i] = str[i];
		i++;
	}
	return (newstr);
}
