#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * word_len - returns the length of the initial word in the string
 * @str: input string
 *
 * Return: length of first word
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && (*(str + index) != ' '))
	{
		len++;
		index++;
	}
	return (len);
}
/**
 * words_count - returns the count of words in a string
 * @str: input string
 *
 * Return: count of words
 */
int words_count(char *str)
{
	int index = 0, ar_len = 0, word_count = 0;

	for (index = 0; *(str + index); index++)
		ar_len++;
	for (index = 0; index < ar_len; index++)
	{
		if (*(str + index) != ' ')
		{
			word_count++;
			index += word_len(str + index);
		}
	}
	return (word_count);
}
/**
 * strtow - splits a string into words.
 * @str: input string to be split
 *
 * Return:  pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **f_ptr;
	int word_count, w, letter_count, l, index = 0;

	if (str == NULL || str[0] == 0)
	{
		return (NULL);
	}
	word_count = words_count(str);
	if (word_count == 0)
		return (NULL);
	f_ptr = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (f_ptr == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < word_count; w++)
	{
		while (str[index] == ' ')
			index++;

		letter_count = word_len(str + index);
		f_ptr[w] = malloc(sizeof(char) * (letter_count + 1));

		if (f_ptr[w] == NULL)
		{
			for (; w >= 0; w--)
				free(f_ptr[w]);
			free(f_ptr);
			return (NULL);
		}
		for (l = 0; l < letter_count; l++)
			f_ptr[w][l] = str[index++];
		f_ptr[w][l] = '\0';
	}
	f_ptr[w] = NULL;
	return (f_ptr);
}
