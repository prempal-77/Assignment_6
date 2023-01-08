//Write a program to calculate factorial of a number


#include <stdio.h>

int main() 
{
  int n, factorial = 1;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (int i = 2; i <= n; i++) 
  {
    factorial *= i;
  }

  printf("Factorial = %d", factorial);

  return 0;
}
