#include <stdlib.h>

/**
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 */
int main(void)
{
    long long int lpf = 600851475143ll;
    long long int pf = 2ll;
    for (pf; pf < lpf; pf++) {
      if (lpf % pf == 0) {
          lpf /= pf;
      }
    }
    printf("answer: %lld \n", lpf);
    return 0;
}
