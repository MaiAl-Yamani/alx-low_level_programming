#include "main.h"
/**
 * check_iden - checks two strings if identical
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * @i: index for s1
 * @j: index for s2
 *
 * Return: 1 if identical 0 otherwise
 */
int check_iden(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
	{
		return (1);
	}
	if (s1[i] == s2[j])
	{
		return (check_iden(s1, s2, i + 1, j + 1));
	}
	if (s2[j] == '*')
	{
		return (check_iden(s1, s2, i + 1, j) || check_iden(s1, s2, i, j + 1));
	}
	if (s1[i] == '\0' && s2[j] == '*')
	{
		return (check_iden(s1, s2, i, j + 1));
	}
	else
	{
		return (0);
	}
}
/**
 * wildcmp - compares two strings to see if they're identical
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: 1 if identical 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return (check_iden(s1, s2, 0, 0));
}
