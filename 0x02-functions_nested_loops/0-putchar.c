#include "main.h"
/**
 * main - Entry point
 * Description: print _putchar, followed by new line
 * Return: always 0 (success)
 */

int main(void)
{
	char x[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');
	return (0);
}
