#include <stdio.h>
int main(void) {
    int pnt, ch;
    while(scanf("%d", &pnt)==1) {
        printf("Конвертер данных: 1)Б->КБ, 2)КБ->МБ, 3)МБ->ГБ, 4)бит->байт, 5)выход\n");
        while(scanf("%d",&ch)==1) {
            if((pnt <= 5) && (pnt > 0)) {
                switch(pnt) {
                    case 1 :
                    printf("Конвертер данных: Б->КБ\n");
                    printf("%d\n", (ch / 1024));
                    break;
                    case 2 :
                    printf("Конвертер данных: КБ->МБ\n");
                    printf("%d\n", (ch / 1024));
                    break;
                    case 3 :
                    printf("Конвертер данных: МБ->ГБ\n");
                    printf("%d\n", (ch / 1024));
                    break;
                    case 4 :
                    printf("Конвертер данных: бит->байт\n");
                    printf("%d\n", (ch / 8));
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