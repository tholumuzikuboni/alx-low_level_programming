#include <unistd.h>

/**
 * _putchar - writes the charactor c to stdout
 * @c: The charactor to print
 * Return: Always 1 (Success)
 * On error, -1 is returned, and errno is set approprietly.
 */

int _putchar (char c)

{
	return (write(1, &c, 1));
}	
