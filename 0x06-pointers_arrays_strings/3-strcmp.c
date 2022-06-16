#include "main.h"

/**
 * _strcmp - compares string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[a] - s2 [a]
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	/**
	 * We have reached the end of S1 OR we have reached the end of S2
	 *
	 */

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
