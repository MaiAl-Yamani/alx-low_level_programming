#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	concat_str = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (concat_str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < (strlen(s1)))
	{
		concat_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < (strlen(s2)))
	{
		concat_str[i + j] = s2[j];
		j++;
	}
	concat_str[j] = '\0';
	return (concat_str);
}
