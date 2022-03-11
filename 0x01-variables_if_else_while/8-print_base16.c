#include <stdio.h>

/**
 * main - Hexadecimal
 *
 * Return: 0
 */

int main(void)
{
	char ch;
	char up;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (up = 'a'; up <= 'f'; up++)
	{
		putchar(up);
	}
	putchar('\n');
	return (0);
}
