#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes character to stdoutput
 * @c: The character to be printed
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
