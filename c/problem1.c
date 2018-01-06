#include <stdio.h>
#define MAX_NATURAL_NUM 999

int main(void)
{
    int sum, natural_num = 0;
    for (natural_num; natural_num <= MAX_NATURAL_NUM; natural_num++) {
        if ( natural_num % 3 == 0 || natural_num % 5 == 0) {
            sum += natural_num;
        }
    }
    printf("sum: %d \n", sum);
    return 1;
}
