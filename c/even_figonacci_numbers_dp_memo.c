#include <stdio.h>
#include <stdbool.h>
#define MAX_TERM 4000000

int fibo[2000000] = {};
bool in_fibo[200000] = {};

/** 
 * Time complexity: O(n)
 **/
int main(void)
{
    fibo[0] = 0;
    fibo[1] = 1;
    in_fibo[0] = true;
    in_fibo[1] = true;
    int sum = 0;
    int i = 2;
    while (get_fibo_term(i) < MAX_TERM) {
        if (get_fibo_term(i) % 2 == 0) {
            sum += fibo[i];
        }
        i++;
    }
    printf("answer: %d \n", sum);
    return 0;
}

int get_fibo_term(int i)
{
    if (in_fibo[i] == false) {
        fibo[i] = get_fibo_term(i - 1) + get_fibo_term(i - 2);
        in_fibo[i] = true;
    }
    return fibo[i];
}
