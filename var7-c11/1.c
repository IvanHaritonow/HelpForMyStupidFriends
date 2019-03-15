#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a[4][4] = {};
    int queryAmount[4] = {};

    for(int i = 0; i <= 3; i++) {
        for(int j = 0; j <= 3; j++) {
            a[i][j] = rand() % 10;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    printf("-------\n");
    
    for(int j = 0; j <= 3; j++) {
        for(int i = 0; i <= 3; i++) {
            queryAmount[0] += a[i][j];
        }
        printf("%d  ", queryAmount[0]);
    }
    
    getch();
}
