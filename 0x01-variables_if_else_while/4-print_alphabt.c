#include <stdio.h>

/**
 * main - except q and e
 *
 * Return: 0 as always
 */

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}

	}
	putchar('\n');
	return (0);
}
