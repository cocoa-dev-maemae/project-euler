#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

static bool is_prime(int n);

/**
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 * What is the 10001st prime number?
 */
int main(int argc, char *argv)
{
    int n, count = 1;
    for (n; count <= 10001; ++n) {
        if (is_prime(n) == true) {
            count++;
        }
    }

    printf("answer: %d \n", n - 1);
    return 0;
}

static bool is_prime(int n)
{
    if (n == 0 || n == 1) {
        return false;
    }

    if (n == 2) {
        return true;
    }

    int i = 2;
    for (i; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
