//Write a program to calculate sum of first N natural numbers

#include <stdio.h>

int main() 
{
  int n, sum = 0;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) 
  {
    sum += i;
  }

  printf("Sum = %d", sum);

  return 0;
}
