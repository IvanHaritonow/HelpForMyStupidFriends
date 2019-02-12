#include <stdio.h>

int main() {
    int n = 6;
    int a[] = {0, 1, 1, 0, 1, 0};
    int one[] = {};
    int zero[] = {};
    int countOne = 0;
    int countZero = 0;
    
    for (int i = 0; i < n; i++) {
        if (a[i] == 0)
            countZero++;
        else countOne++;    
    }
    
    for (int i = 0; i < countZero; i++) {
        zero[i] = 0;
        printf("%d  ", zero[i]);
    }
    
    printf("\n");
    
    for (int i = 0; i < countOne; i++) {
        one[i] = 1;    
        printf("%d  ", one[i]);
    }
    
    getch();
}
