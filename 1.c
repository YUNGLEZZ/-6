#include <stdio.h>
#include <ctype.h>
int main(void) {
    int up = 0, low = 0, oth = 0;
    int a;
    while((a = getchar()) != '#') {
        if(islower(a)) {
            low++;
        }
        else if(isupper(a)) {
            up++;
        }
        else {
            oth++;
        }
    }
    printf("верхний: %d нижний: %d другое: %d\n", up, low, oth);
    return 0;
}