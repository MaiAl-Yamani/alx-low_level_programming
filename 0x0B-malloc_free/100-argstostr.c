#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - oncatenates all the arguments of the program
 * @ac: number of command line arguments
 * @av: array of values of arguments
 *
 * Return: a pointer to a new string of arguments followed by new line
 */
char *argstostr(int ac, char **av)
{
	char *concat_res;
	int i, j, k;
	int str_l;

	str_l = 0, i = 0, j = 0, k = 0;
	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			str_l++;
			j++;
		}
		str_l++;
	}
	concat_res = (char *)malloc((str_l + 1) * sizeof(char));
	if (concat_res == NULL)
	{
		free(concat_res);
		return (NULL);
	}
	i = 0;
	k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			concat_res[k] = av[i][j];
			k++;
			j++;
		}
		concat_res[k] = '\n';
		k++;
		i++;
	}
	concat_res[k] = '\0';
	return (concat_res);
}
