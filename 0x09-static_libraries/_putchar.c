#include "main.h"
#include <unistd.h>

/**
 *
 * _putchar - writes the character c to stdout
 * 
 * @c: The character to print
 *
 *
 *
 * Return: On success 1.
 *
 * On error, -1 is returned, and errno is set appropriately.
 * 
 */

int _putchar(char c)

{
	
	return (write(1, &c, 1));
		
}

/**
 *
 * _islower - writes c chararacter lower than the other
 *
 * @c: The character to print
 *
 * Return: On success 1.
 *
 * On error, -1 is returned, and errnois set appropriately.
 *
 */

int _islower(int c)
{
	return (write(1, &c, 1));
}

/**

 * _isalpha - writes the character c to stdout

 * @c: The character to print

 *

 * Return: On success 1.

 * On error, -1 is returned, and errno is set appropriately.

 */

int _isalpha(int c)
{
	return(write(1, &c, 1));
}

/**

 * _abs - writes the character c to stdout

 * @n: The character to print

 *

 * Return: On success 1.

 * On error, -1 is returned, and errno is set appropriately.

 */

int _abs(int n)
{
	return(write(1, &n, 1));
}

/**

 * _isupper - writes the character c to stdout

 * @c: The character to print

 *

 * Return: On success 1.

 * On error, -1 is returned, and errno is set appropriately.

 */

int _isupper (int c)
{
	return(write(1, &c, 1));
}
