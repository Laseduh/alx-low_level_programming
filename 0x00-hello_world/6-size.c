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

	printf("size of a char: %zu byte(s)\n", sizeof(c));
	printf("size of an int: %zu byte(s)\n", sizeof(i));
	printf("size of a long int: %zu byte(s)\n", sizeof(w));
	printf("size of a long long int: %zu byte(s)\n", sizeof(d));
	printf("size of a float: %zu byte(s)\n", sizeof(z));
	return (0);

}
