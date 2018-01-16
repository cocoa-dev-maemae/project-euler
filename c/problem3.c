#include <stdlib.h>

/**
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 */
int main(void)
{
    long long int largest_prime_factor = 600851475143ll;
    long long int num = 2ll;

    for (num; num < largest_prime_factor; num++) {
      if (largest_prime_factor % num == 0) {
          largest_prime_factor /= num;
      }
    }
    
    printf("answer: %lld \n", largest_prime_factor);
    return 1;
}
