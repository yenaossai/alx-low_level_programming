#include "main.h"

/**
 * main - returns the value of s bit at a given index
 * @n: number to check bits in
 * @index: index at which to check bit
 * Return: the value of the bit at index or -1 if tehre is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
