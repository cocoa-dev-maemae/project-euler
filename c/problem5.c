#include <stdio.h>
#define MIN_NUM 1
#define MAX_NUM 20

static int calc_lcm(int small_posi, int n);
static int calc_gcm(int small_posi, int n);

/**
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 */
int main(int args, char *argv[])
{
    int small_posi = 1;
    int n = 0;
    for (n = MIN_NUM; n < MAX_NUM; n++) {
        small_posi = calc_lcm(small_posi, n);
    }

    printf("answer: %d\n", small_posi);
    return 0;
}

/**
 * Calculate least common multiple
 */
int calc_lcm(int small_posi, int n)
{
    int p = small_posi * n;
    return p / calc_gcm(small_posi, n);
}

/**
 * Calculate greatest common measure
 */
int calc_gcm(int small_posi, int n)
{
    while (small_posi != n) {
        if (small_posi > n) {
            small_posi = small_posi - n;
        } else {
            n = n - small_posi;
        }
    }
    return small_posi;
}
