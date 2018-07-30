#include <stdio.h>

#define PERIMETER 1000
/**
 * A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
 * a2 + b2 = c2
 *
 * For example, 32 + 42 = 9 + 16 = 25 = 52.
 *
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
 **/
int main(void)
{
    int a, b, c, p;
    for (a = 1; a < PERIMETER; a++) {
        for (b = a + 1; b < PERIMETER; b++) {
            c = PERIMETER - a - b;
            if (a * a + b * b == c * c) {
                p = a * b * c;
                a = PERIMETER;
                break;
            }
        }
    }
    printf("answer: %d \n", p);
    return 1;
}
