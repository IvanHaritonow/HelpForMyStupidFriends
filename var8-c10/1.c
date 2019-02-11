#include <stdio.h>

int main() {
    
    int k, j = 0, N = 10;
    int a[] = {-3, 6, 4, -2, 7, -8, 5, 0, 1, -9};
    
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
    
    for (int i = 0; i < N; i++)
        printf("%d  ", a[i]);

    getch();
}
