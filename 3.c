#include <stdio.h>
int main(void) {
    int c3 = 0, c5 = 0;
    double sum3 = 0.0, sum5 = 0.0;
    int a = 0;
    while(scanf("%d", &a)==1 && a != 0) {
        if(a % 5 == 0) {
            c5++;
            sum5 =+ a;
        }
        if(a % 3 == 0) {
            c3++;
            sum3 =+ a;
        }
    }
    printf("%d %lf\n", c5, sum5 / c5);
    printf("%d %lf\n", c3, sum3 / c3);
    return 0;
}