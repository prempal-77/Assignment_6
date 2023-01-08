//Write a program to check whether a given number is a Prime number or not

#include <stdio.h>

int main() 
{
  int n;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (int i = 2; i < n; i++) 
  {
    if (n % i == 0) {
      printf("%d is not a prime number", n);
      return 0;
    }
  }

  printf("%d is a prime number", n);

  return 0;
}
