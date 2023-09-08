#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this program  that prints the alphabet in lowercase
 * Return: always 0
 */
int main(void)
{
char n;
for (n = 'a'; n <= 'z'; n++)
{
if (n != 'e' && n != 'q')
putchar(n);
}
putchar('\n');
return (0);
}

