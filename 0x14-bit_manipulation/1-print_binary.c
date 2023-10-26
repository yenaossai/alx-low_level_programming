#include "main.h"

/**
 * main - prints the binary representation of a number
 * @n: number to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int binary[64];
	int i;

	for (i = 0; i < 64; i++)
	{
		binary[i] = 0;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	i = 0;

	while (n > 0)
	{
		binary[i] = n & 1;
		n >>= 1;
		i++;
	}

	for (i = 63; i >= 0; i--)
	{
		_putchar(binary[i] + '0');
	}
}
