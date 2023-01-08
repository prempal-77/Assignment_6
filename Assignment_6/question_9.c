//Write a program to calculate LCM of two numbers

#include <stdio.h>

int main() 
{

  int m, n, lcm;

  printf("Enter two positive integers: ");
  scanf("%d %d", &m, &n);

  lcm = (m > n) ? m : n;

  while(1) 
  {
    if( lcm % m == 0 && lcm % n == 0 ) 
    {
      printf("The LCM of %d and %d is %d.", m, n, lcm);
      break;
    }
    lcm++;
  }

  return 0;
}
