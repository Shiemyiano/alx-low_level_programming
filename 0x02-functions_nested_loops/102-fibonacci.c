#include <stdio.h>
/**
  * main - Prints the first 52 fibonacci numbers
  *
  * Return: Nothing!
  */
int main(void)
{
long i = 0;
long f = 1;
long sum = 0;
int j;
printf("%ld, %ld, ", i, f);
for (j = 0; j <= 50; j++)
{
sum = i + f;
i = f;
f = sum;
printf("%ld, ", sum);
}
printf("\n");
return (0);
}
