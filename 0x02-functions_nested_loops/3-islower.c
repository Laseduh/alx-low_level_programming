#include "main.h"
/**
 * _islower - checks for lower case character
 * @c: the character to check for
 * Description: checks for lowercase character.
 * Return: 1 if c is lower case. 0 otherwise
 */
int _islower(int c)
{
	char ch;
	int result = 0;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch == c)
			result = 1;
	}
	return (result);
}
