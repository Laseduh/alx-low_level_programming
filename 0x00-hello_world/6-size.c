#include <stdio.h>
/**
 * main - Entry point
 * Descripton: "prints the size of various files"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long long int d;
	char c;
	float z;
	long int w;

	printf("size of an int: %lu byte(s)\n", sizeof(i));
	printf("size of a long long: %lu byte(s)\n", sizeof(d));
	printf("size of a char: %lu byte(s)\n", sizeof(c));
	printf("size of a float: %lu byte(s)\n", sizeof(z));
	printf("size of a long int: %lu byte(s)\n", sizeof(w));
	return (0);
}
