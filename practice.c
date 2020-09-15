#include <stdio.h>

int main(void){
    int i;
    double x;

    for(i = 1; i <10000; i *= 10)
        printf("%d\n", i);
}