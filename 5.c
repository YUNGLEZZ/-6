#include <stdio.h>
int main(void) {
    int pnt;
    while(scanf("%d", &pnt)==1) {
        printf("Конвертер данных: 1)Б->КБ, 2)КБ->МБ, 3)МБ->ГБ, 4)бит->байт, 5)выход\n");
        if((pnt <= 5) && (pnt > 0)) {
            switch(pnt) {
            case 1 :
                printf("Конвертер данных: Б->КБ\n");
                break;
            case 2 :
                printf("Конвертер данных: КБ->МБ\n");
                break;
            case 3 :
                printf("Конвертер данных: МБ->ГБ\n");
                break;
            case 4 :
                printf("Конвертер данных: бит->байт\n");
                break;
            case 5 :
                printf("Конвертер данных: выыход\n");
                break;
            }
        }
        else {
        printf("Ошибка, введите корректный номер\n");
        continue;
        }
    }
    return 0;
}           