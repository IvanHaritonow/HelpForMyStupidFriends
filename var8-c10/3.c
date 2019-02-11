//***---Скорее всего не работает правильно, я хз, у меня компилятор с ума сходит---***

#include <stdio.h>

int main() {
    
    int j = 0, N = 10, M = 5, K = 5, k = 0;
    int a[] = {};
    int b[] = {1, 3, 5, 7, 9};
    int c[] = {0, 2, 4, 6, 8};
    
    for (int i = 0; i < M; i++) 
        a[i] = b[i];
        
    for (int i = 0; i < K; i++ )
        a[i + K] = c[i];
    
    while (j != N) {
        for (int i = 0; i < N - 1; i++) {
            if (a[i] > a[i + 1]) {
                k = a[i];
                a[i] = a[i + 1];
                a[i + 1] = k;
            }
        }
        j++;
    }
    
    for (int i = 0; i < N; i++ )
        printf("%d  ", a[i]);
    
    getch();
}
