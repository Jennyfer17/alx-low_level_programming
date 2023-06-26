#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to string
 */
void rev_string(char *s)
{
	char temp;
	int i, j, l;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	l = i - 1;

	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[l];
		s[l--] = temp;
	}


}
