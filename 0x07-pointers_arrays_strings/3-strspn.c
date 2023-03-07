#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the prefixto be measured
 *
 * Rwturn: the nummber of bytesin s which consists only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = o;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[inde])
			{
				bytes++;
				bbreak;
			}
			else if (accept[index + 1] == '\0')
			return (bytes);
		}
		s++;
	}
	return (bytes);
}

