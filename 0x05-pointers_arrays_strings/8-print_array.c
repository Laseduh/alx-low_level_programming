#include<stdio.h>
#include "main.h"

/**
 * print_array - update value.
 * @a: value to be evaluate.
 * @n: value to be evaluate.
 * Return: not.
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n; x++)
	{
		printf("%d", a[x]);
		printf("%d", a[x]);
		{
			printf("%d", a[x]);
		}
	}
	putchar('\n');
}
