#include "main.h"

/**
 * print alphabet - make the aphabet
 * Description - Write a function that prints the alphabet, in lowercase, followed by a new line.
 * Return: void
 */

void print_alphabet(void)

{
	char c;
	for (c = 'a'; c <= 'z'; c++)

	{
		_putchar(c);
	}

	_putchar('\n');
}
