#include <stdio.h>

int main() {
    
    int elemMin = 10000, indMin = 10000, indFirstPos, N = 10, check = 0;
    int b[] = {-3, 6, 4, -2, 7, -8, 5, 0, 1, -9};
    
    for (int i = 0; i < N; i++) {
        if (check == 0 && b[i] > 0) {
            check = 1;
            indFirstPos = i;
        }
        
        if (b[i] < elemMin) {
            elemMin = b[i];
            indMin = i;
        }
        
        if (i == N - 1) {
            check = b[indMin];
            b[indMin] = b[indFirstPos];
            b[indFirstPos] = check;
            
            for (int i = 0; i < N; i++)
                printf("%d  ", b[i]);
        }
    }
    
    getch();
}
