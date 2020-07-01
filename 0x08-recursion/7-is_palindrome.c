#include "holberton.h"
int _strlen_recursion(char *s);
int pal(char *s, int len, int i);
/**
 * is_palindrome - fsqdfqsdfqsd
 * @s: PAL.
 * Return: ... 0.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pal(s, len - 1, 0));
}
/**
 * _strlen_recursion - check it.
 * @s: string pointer
 * Return: ..0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}

/**
 * pal - palind
 * @s: var.
 * @len: length.
 * @i: compt
 * Return: Always 0.
 */
int pal(char *s, int len, int i)
{
	if (s[i] == s[len - i] && i == len / 2)
	{
		return (1);
	}
	else if (s[i] == s[len - i])
	{
		return (pal(s, len, i + 1));
	}
	else
		return (0);
}