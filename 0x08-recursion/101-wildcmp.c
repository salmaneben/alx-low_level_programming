#include "main.h"

/**
 * str_checker - Checks if two strings are identical.
 * @str1: Base address of the first string.
 * @str2: Base address of the second string.
 * @i: Left index.
 * @j: Special index (joker).
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int str_checker(char *str1, char *str2, int i, int j)
{
	if (str1[i] == '\0' && str2[j] == '\0')
		return (1);
	if (str1[i] == str2[j])
		return (str_checker(str1, str2, i + 1, j + 1));
	if (str1[i] == '\0' && str2[j] == '*')
		return (str_checker(str1, str2, i, j + 1));
	if (str2[j] == '*')
		return (str_checker(str1, str2, i + 1, j) || str_checker(str1, str2, i, j + 1));
	return (0);
}

/**
 * wildcmp - Checks if two strings could be considered identical.
 * @s1: Base address of the first string.
 * @s2: Base address of the second string.
 * Return: 1 if the strings are considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
