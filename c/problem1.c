#include <stdio.h>
#define MAX_NATURAL_NUM 999

/**
 * Problem1
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. 
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */
int main(void)
{
    int sum, natural_num = 0;
    for (natural_num; natural_num <= MAX_NATURAL_NUM; natural_num++) {
        if (natural_num % 3 == 0 || natural_num % 5 == 0) {
            sum += natural_num;
        }
    }
    printf("result: %d \n", sum);
    return 0;
}
