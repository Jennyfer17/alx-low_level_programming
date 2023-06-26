#include <stdio.h>
/**
 * main - prints alphabet in lowercase and uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}

	for (l = 'A'; l <= 'Z'; l++)
	{
		putchar(l);
	}
	putchar('\n');

	return (0);
}
