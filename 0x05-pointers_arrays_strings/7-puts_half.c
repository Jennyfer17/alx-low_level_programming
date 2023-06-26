#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: pointer to string
 */
void puts_half(char *str)
{
	int i, j, half;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		half = i / 2;
	}
	else
	{
		half = (i - 1) / 2;
	}

	for (j = half; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
