#include <stdlib.h>
#include <stdbool.h>
#define MIN_NUM 100
#define MAX_NUM 999

static bool is_palindromic(int p);

/**
 * A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */
int main(void)
{
    int i, j, p, largest_palindromic = 0;
    for (i = MIN_NUM; i <= MAX_NUM; i++) {
        for (j = MIN_NUM; j <= MAX_NUM; j++) {
            p = i * j;
            if (is_palindromic(p) == 1 && p > largest_palindromic) {
                largest_palindromic = p;
            }
        }
    }

    printf("answer: %u\n", largest_palindromic);
    return 0;
}

bool static is_palindromic(int p)
{
    int r = 0;
    int t = p;
    while (t != 0) {
        r = r * 10 + t % 10;
        t /= 10;
    }
    return (r == p) ? true : false;
}
