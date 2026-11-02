#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int main(void) {
    setlocale(LC_ALL, "");
    wchar_t a, nw, pr;
    pr = getwchar();
    int k = 0;
    while((a = getwchar()) && a != L'#') {
        nw = a;
        if(pr == nw) {
            k++;
        }
        pr = nw;
    }
    printf("%d\n", k);
    return 0;
}