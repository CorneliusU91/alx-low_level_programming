#include "main.h"

/**
 * rev_string -> reverse the string.
 * @s: pointer to string.
 *
 * Return: void.
 */

void rev_string(char *s)
{
	char tmp;
	int i, length1, length2;

	length1 = 0;
	length2 = 0;

	while (s[length1] != '\0')
		length1++;
	length2 = length1 - 1;
	for (1 = 0; i < length1 / 2; i++)
	{
		"manalx" "xlanam"
		tmp = s[i];
		s[i] = s[length2];
		s[length2] = tmp;
		length2 -= 1;
	}
}



