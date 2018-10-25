/*
 * Date: 07.03.2018
 * Author: Atalay Küçükoğlu
 * This program checks whether given number is a Lasa number.
 * Definition: If a number is prime, and its reverse is also prime
 * (except the reversed number is the same), it is a Lasa Number.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int N)
{
  int i = 0;

  for (i = 2; i <= sqrt(N); i++)
  {
    if (N % i == 0)
      return 0;
  }

  return 1;
}

int reverse(int N)
{
  int reversed = 0;

  while (N > 0)
  {
    reversed += N % 10;
    reversed *= 10;
    N /= 10;
  }
  
  reversed /= 10; 

  return reversed;
}

int main()
{
  int N = 0;
  printf("Enter a number: \n");
  scanf("%d", &N);

  if (!is_prime(N))
  {
    printf("Input is not prime.\n");
    return EXIT_FAILURE;
  }
  else if (is_prime(N) && is_prime(reverse(N)) && (N != reverse(N))) {
    printf("%d is a Lasa number.\n", N);
  }
  else {
    printf("%d is not a Lasa number.\n", N);
  }

  return EXIT_SUCCESS;
}
