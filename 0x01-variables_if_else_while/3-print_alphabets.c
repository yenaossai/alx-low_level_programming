#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this program  that prints the alphabet in lowercase and in uppercase
 * Return: always 0
 */
int main(void)
{
	char n;

for (n = 'a'; n <= 'z'; n++)
putchar(n);

for (n = 'A'; n <= 'Z'; n++)
putchar(n);
putchar('\n');
return (0);
}

