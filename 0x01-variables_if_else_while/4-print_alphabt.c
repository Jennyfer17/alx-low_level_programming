#include <stdio.h>
/**
 * main - prints the alhphabet excet q and e
 *
 * Return: Always0
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'q' && l != 'e')
		{
			putchar(l);
		}
	}
	putchar('\n');

	return (0);
}
