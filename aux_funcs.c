#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char ch)
{
	static int contador;
	static char buffer[1024];

	if (ch == -1)
	{
		contador = 0;
		return (0);
	}
	if (ch == -2 || contador == 1024)
	{
		write(1, buffer, contador);
		contador = 0;
	}
	if (ch != -1 && ch != -2)
	{
		buffer[contador] = ch;
		contador++;
		return (1);
	}
	return (0);
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

