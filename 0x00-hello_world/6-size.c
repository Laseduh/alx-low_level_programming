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

	printf("size of an int is: %lu byte(s)\n", sizeof(i));
	printf("size of a long long is: %lu byte(s)\n", sizeof(d));
	printf("size of a char is: %lu byte(s)\n", sizeof(c));
	printf("size of a float is: %lu byte(s)\n", sizeof(z));
	printf("size of a long int is: %lu byte(s)\n", sizeof(w));
	return (0);
}
