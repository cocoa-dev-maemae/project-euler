#include <stdlib.h>

/**
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 */
int main(void)
{
    long long int largest_prime_factor = 600851475143ll;
    long long int prime_factor = 2ll;

    for (prime_factor; prime_factor < largest_prime_factor; prime_factor++) {
      if (largest_prime_factor % prime_factor == 0) {
          largest_prime_factor /= prime_factor;
      }
    }

    printf("answer: %lld \n", largest_prime_factor);
    return 0;
}
