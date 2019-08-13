#include <stdio.h>
#define MAX_TERM 4000000

/** 
 * Time complexity: O(n)
 */
int main(void)
{
    int fibo[2000000] = {};
    fibo[0] = 0;
    fibo[1] = 1;
    int sum = 0;
    for (int i = 2; i < 2000000; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        if (fibo[i] % 2 == 0) {
            if (fibo[i] <= MAX_TERM) {
                sum += fibo[i];
                continue;
            } else {
                break;
            }
        }
    }
    printf("answer: %d \n", sum);
    return 0;
}
