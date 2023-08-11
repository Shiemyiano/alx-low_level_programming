#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * get the last number from random number and check if it greater than 5
 * or less than 6
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int x;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
/* your code goes there */
if (x == 06)
{
printf("Last digit of %d is %d and is 0\n", n, x);
}
else if (x > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, x);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
}


return (0);
}
