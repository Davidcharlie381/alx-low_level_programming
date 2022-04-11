#include "main.h"

/**
<<<<<<< HEAD
 * _puts_recursion - put recursion
=======
 * _puts_recursion - recursion
>>>>>>> 542ad418b35e425e56fcd59f25299c2586f8b839
 * @s: arg
 *
 * Return: void
 */
<<<<<<< HEAD

void _puts_recursion(char *s)
{
	if(*s == '\0')
	{
		putchar('\n');
=======
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
>>>>>>> 542ad418b35e425e56fcd59f25299c2586f8b839
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
