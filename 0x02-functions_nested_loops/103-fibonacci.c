#include <stdio.h>
/**
  * main - the main printing funtion
  * less than 4000000
  * Return: 0
  */
int main(void)
{
int limit = 4000000;
int a = 1, b = 2, next_term = 0;
long long even_sum = 0;
while (a <= limit)
{
if (a % 2 == 0)
{
even_sum += a;
}
next_term = a + b;
a = b;
b = next_term;
}
printf("%lld\n", even_sum);
return (0);
}

