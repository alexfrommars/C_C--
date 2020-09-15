#include <stdio.h>
/* print practice. printf() has many format specifiers. */

int main(void){
    int i;
    double x;

    for(i = 1; i <10000; i *= 10)
        printf("2%d\n", i);

    for(x = 1.234; x < 10000; x *= 10)
        printf("%2lf\n", x);/* */
}