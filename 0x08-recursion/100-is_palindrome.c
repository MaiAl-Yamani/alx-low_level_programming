#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
 * find_palindrome - checks for palindrome string
 * @s: pointer to string
 * @i: left index iterator
 * @j: right index iterator
 *
 * Return: 1 if palindrome 0 otherwise
 */
int find_palindrome(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > j / 2)
		{
			return (1);
		}
		else
		{
			return (find_palindrome(s, i + 1, j - 1));
		}
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - checks if a string is palindrome
 * @s: pointer to string
 *
 * Return: 1 f palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	return (find_palindrome(s, 0, _strlen_recursion(s) - 1));
}
