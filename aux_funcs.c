#include "holberton.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	static char buf[1024];
	static int z;

	if (c == -1 || z >= 1024)
	{
		write(1, &buf, z);
		z = 0;
	}
	if (c != -1)
	{
		buf[z] = c;
		z++;
	}
	return (1);
}

/**
 * num_lenght - counts number of digits of a number
 * @n: string to count digits.
 *
 * Return: digit quantity for count.
 */

int num_lenght(int n)
{
	int counter = 1;

	if (n < 0)
		counter++;
	while (n / 10 != 0)
	{
		counter++;
		n = n / 10;
	}
	return (counter);
}

/**
 * num_lenght_uns - counts number of digits of a number
 * @n: string to count digits.
 *
 * Return: digit quantity for count.
 */
int num_lenght_uns(unsigned int n)
{
	int counter = 1;

	while (n / 10 != 0)
	{
		counter++;
		n = n / 10;
	}
	return (counter);
}
