//Write a program to calculate sum of first N even natural numbers

#include <stdio.h>

int main() 
{
  int n, sum = 0;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (int i = 2; i <= 2*n; i += 2) 
  {
    sum += i;
  }

  printf("Sum = %d", sum);

  return 0;
}
