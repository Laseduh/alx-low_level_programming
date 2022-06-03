#include <stdio.h>
/**
 * main - Entry point
 * Descripton: "prints the size of various files"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	double d;
	char c;
	float z;
	long int w;

	printf("size of an int is: %lu.\n", sizeof (i));
	printf("size of a double is: %lu.\n", sizeof (d));
	printf("size of a char is: %lu.\n", sizeof (c));
	printf("size of a float is: %lu.\n", sizeof (z));
	printf("size of a long int is: %lu.\n", sizeof (w));
	return (0);
}
