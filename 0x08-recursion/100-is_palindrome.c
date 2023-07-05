#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string.
 * @str: The string to calculate the length of.
 * Return: The length of the string.
 */
int _strlen_recursion(char *str)
{
	if (str[0] != '\0')
		return (1 + _strlen_recursion(str + 1));
	return (0);
}

/**
 * pal_checker - Checks if a string is a palindrome.
 * @str: The string to check.
 * @left: The left index.
 * @right: The right index.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int pal_checker(char *str, int left, int right)
{
	if (str[left] == str[right])
		if (left > right / 2)
			return (1);
		else
			return (pal_checker(str, left + 1, right - 1));
	else
		return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
