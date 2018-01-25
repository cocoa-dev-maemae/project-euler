#include <stdlib.h>
#include <stdbool.h>
#define MAX_THREE_DIGIT_NUM 999

bool static is_palindromic_num(int p);

/**
 * A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */
int main(void)
{
    int i, j, p, largest_palindromic_num = 0;
    for (i = 100; i <= MAX_THREE_DIGIT_NUM; i++) {
        for (j = 100; j <= MAX_THREE_DIGIT_NUM; j++) {
            p = i * j;
            if (is_palindromic_num(p) == 1 && p > largest_palindromic_num) {
                largest_palindromic_num = p;
            }
        }        
    }

    printf("answer: %u\n", largest_palindromic_num);
    return 0;
}

bool static is_palindromic_num(int p)
{
    int reverse_num = 0;
    int tmp_num = p;
    while (tmp_num != 0) {
        reverse_num = reverse_num * 10 + tmp_num % 10;
        tmp_num /= 10;
    }
    return (reverse_num == p) ? true : false;
}
