***===НЕ СПИСЫВАТЬ ЭТУ ФИГНЮ. Я НЕ ДОДЕЛАЛ ПРОСТО НЕ ХОЧУ ТЕРЯТЬ КОД===***
***===НЕ СПИСЫВАТЬ ЭТУ ФИГНЮ. Я НЕ ДОДЕЛАЛ ПРОСТО НЕ ХОЧУ ТЕРЯТЬ КОД===***
***===НЕ СПИСЫВАТЬ ЭТУ ФИГНЮ. Я НЕ ДОДЕЛАЛ ПРОСТО НЕ ХОЧУ ТЕРЯТЬ КОД===***

#include <stdio.h>

int main() {
    int a[] = {5, -3, 4, -8, -9, 1, 9, 6, -3, 4, 8, 2};
    int b[] = {};
    int sizeOfArr = 12, k = 0;
        
    for (int i = 0; i < sizeOfArr; i++) {
        if (a[i] < 0) {
            b[k] = a[i];
            printf("%d", k);
            k = k + 1;
        }
    }    
    
    for (int i = 0; i < sizeOfArr; i++) {
        if (a[i] > 0) {
            b[k] = a[i];
            k++;
        }
    }  
    
    for (int i = 0; i < sizeOfArr; i++) 
        printf("%d ", b[i]);
    
    getch();
}