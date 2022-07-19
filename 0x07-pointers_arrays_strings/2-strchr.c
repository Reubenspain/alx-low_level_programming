#include "main.h"
/**
 * _strchr- locates a character in a string
 * @s: the string
 * @c: the character
 * Return: a pointer to the first occurrence of the character c
 * or NULL if the character is not
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
	if (*(s + i) == c)
	return (s + i);
		if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
