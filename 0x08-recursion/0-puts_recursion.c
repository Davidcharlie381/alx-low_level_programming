#include "main.h"
<<<<<<< HEAD

/**
 * _puts_recursion - recursion
 * @s: arg
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
=======
/**
* _puts_recursion - recursion
* @s: arg
*
* Return: void
*/
void _puts_recursion(char *s)
{	
        if (*s == '\0')
        {
        _putchar('\n');
        return;
}	
        _putchar(*s);
        _puts_recursion(s + 1);
>>>>>>> c90e66fb86d7938560ce4318748e40a2a8776005
}
