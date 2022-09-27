#include "main.h"

/**
 * _strbrk - search a string for any of a set of bytes
 * @s: source string
 * @ceept: accepted characters
 *
 * Return: the string since the first found accepted character
 */
char *_strbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
