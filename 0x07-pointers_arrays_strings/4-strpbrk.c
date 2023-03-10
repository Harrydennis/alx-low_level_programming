#include "main.h"

/**
 * _strpbrk - earches a string for any of a set of bytes.
 * @s: The strings to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: If a set is matched - a poiter to the matched byte
 * If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
