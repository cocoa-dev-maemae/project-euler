#include <stdio.h>
#define MIN_NUM 1
#define MAX_NUM 100

/**
 * The sum of the squares of the first ten natural numbers is,
 * 12 + 22 + ... + 102 = 385
 * The square of the sum of the first ten natural numbers is,
 * (1 + 2 + ... + 10)2 = 552 = 3025
 * Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 */
int main(int argc, char *argv[])
{
    int sum_of_square, square_of_sum, sum, n = 0;
    for (n = MIN_NUM; n <= MAX_NUM; n++) {
        sum_of_square += n * n;
        sum += n;
    }
    square_of_sum = sum * sum;

    printf("answer: %d \n", square_of_sum - sum_of_square);
    return 0;
}
