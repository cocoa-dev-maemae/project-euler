#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

#define MAX_NUM 2000000

/**
 * 
 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 * Find the sum of all the primes below two million.
 *
 **/
int main(void)
{
    bool is_prime[MAX_NUM];

    // set 1(=means prime) to all elements as an initialization 
    memset(is_prime, true, sizeof(is_prime)); 
   
    // 0 and 1 are not primes
    is_prime[0] = is_prime[1] = false;

    // sieve of Eratosthenes
    for (int i = 2; i < sqrt(MAX_NUM); i++) {
        if (is_prime[i] == true) {
            for (int j = i; (i * j) < MAX_NUM; j++) {
                // a composite number of a prime is not a prime 
                // change to 0 which is set as 1 in advance
                is_prime[i * j] = 0;
            }
        }
    }

    // sum of prime
    long long int sum = 0;
    for (int i = 0; i < MAX_NUM; i++) {
        if (is_prime[i] == true) {
            sum += i;
        }
    }

    printf("answer: %lld \n", sum);
}
