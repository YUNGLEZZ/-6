#include <stdio.h>
int main(void) {
    int zap;
    double itog = 0;
    while(scanf("%d", &zap)==1 && zap > 0) {
        if(zap <= 2000) {
            itog = zap * 0.02;
            printf("запросов: %d; тариф: <=2000; сумма: %lf\n", zap, itog);
        }
        else if((zap > 2000) && (zap <=12000)) {
            itog = (zap - 2000) * 0.015;
            itog = itog + (2000 * 0.02);
            printf("запросов: %d; тариф: 2000<zap<=12000; сумма: %lf\n", zap, itog);
        }
        else if(zap > 12000) {
            itog = (zap - 12000) * 0.01;
            itog  += (12000 - 2000) * 0.015;
            itog += 2000 * 0.02;
            printf("запросов: %d; тариф: >12000; сумма: %lf\n", zap, itog);
        }
    }
    return 0;
}