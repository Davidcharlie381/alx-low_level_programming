#include <unistd.h>

/**
<<<<<<< HEAD
 * _putchar - writes the character c to standard output
 * @c: the character to print
 *
 * Return: On success 1
 * On error, -1 is returned and errno is set appropriately.
 */

int _putchar (char c)
=======
<<<<<<< HEAD
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
=======
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
>>>>>>> c90e66fb86d7938560ce4318748e40a2a8776005
int _putchar(char c)
>>>>>>> 542ad418b35e425e56fcd59f25299c2586f8b839
{
	return (write(1, &c, 1));
}
