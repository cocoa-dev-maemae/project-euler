#include <stdlib.h>

/**
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 */
int main(void)
{
    long long int largest_pf = 600851475143ll;
    long long int pf = 2ll;
    for (pf; pf < largest_pf; pf++) {
      if (largest_pf % pf == 0) {
          largest_pf /= pf;
      }
    }
    printf("answer: %lld \n", largest_pf);
    return 0;
}
