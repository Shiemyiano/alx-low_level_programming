#include <stdio.h>
/**
  * main - Prints the first 52 fibonacci numbers
  *
  * Return: Nothing!
  */
int main(void)
{
int i = 0;
int f = 1;
int sum = 0;
int j;
printf("%d, %d, ", i, f);
for (j =0; j <= 50; j++)
{
sum = i + f;
i = f;
f = sum;
printf("%d, ",sum);
}
printf("\n");
return (0);
}
