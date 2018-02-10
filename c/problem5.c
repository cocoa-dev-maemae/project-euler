#include <stdio.h>
#define MIN_NUM 1
#define MAX_NUM 20

static int calc_lcm(int smallest_posi_num, int num);
static int calc_gcm(int smallest_posi_num, int num);

/**
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 */
int main(int args, char *argv[])
{
    int smallest_posi_num = 1;
    int num = 0;
    for (num = MIN_NUM; num < MAX_NUM; num++) {
        smallest_posi_num = calc_lcm(smallest_posi_num, num);
    }

    printf("answer: %d\n", smallest_posi_num);
    return 0;
}

/**
 * Calculate least common multiple
 */
int calc_lcm(int smallest_posi_num, int num)
{
    int p = smallest_posi_num * num;
    return p / calc_gcm(smallest_posi_num, num);
}

/**
 * Calculate greatest common measure
 */
int calc_gcm(int smallest_posi_num, int num)
{
    while (smallest_posi_num != num) {
        if (smallest_posi_num > num) {
            smallest_posi_num = smallest_posi_num - num;
        } else {
            num = num - smallest_posi_num;
        }
    }
    return smallest_posi_num;
}
