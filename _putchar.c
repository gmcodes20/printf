#include "main.h"

/**
 * print_buf - prints buffer
 * @buf: buffer pointer
 * @nbuf: number of bytes to print
 * Return: number of bytes printed.
 */
int _putchar(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
