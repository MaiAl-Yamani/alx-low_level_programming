#include "main.h"
#include <stdlib.h>
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

	str_l = ac, i = 0, j = 0, k = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		while (av[i][j] != '\0')
		{
			str_l++, j++;
		}
		i++;
	}
	str_l++;
	concat_res = malloc(str_l * sizeof(char));
	if (concat_res == NULL)
	{
		free(concat_res);
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			concat_res[k] = av[i][j];
			k++, j++;
		}
		concat_res[k] = '\n';
		k++, i++;
	}
	concat_res[k++] = '\0';
	return (concat_res);
}
