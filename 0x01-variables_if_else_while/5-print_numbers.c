#include <stdio.h>

/**
 * main - base ten
 *
 * Return: 0
 */

int main(void)
{
	int base;

	for (base = '0'; base <= '9'; base++)
	{
		putchar(base);
	}
	putchar('\n');

	return (0);
}
