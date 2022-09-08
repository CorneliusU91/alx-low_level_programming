#include <stdio.h>

/**
 * main - print the string in the put function
 * Description: using longer description of the main function
 * this program prints "consistency breed success
 * return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lii;
	float f;

	printf("Size of a char: %1d byte(s)\n", sizeof(c));
	printf("Size of an int: %1d byte(s)\n", sizeof(i));
	printf("Size of a long int: %1d byte(s)\n", sizeof(li));
	printf("Size of a long long int: %1d byte(s)\n", sizeof(lii));
	printf("Size of a float: %1d byte(s)\n", sizeof(f));
	return (0);
}
