#include <stdio.h>

int main() {
    int a[] = {5, -3, 4, -8, -9, 1, 9, 6, -3, 4, 8, 2};
    int check = 0, indexMin = 99999, indexPos = 1, sizeOfArr = 12;
    
    for (int i = 0; i < sizeOfArr; i++) {
        if (a[i] >= indexPos) {
                check = 1;
                indexPos = i;
                break;
        }
    }  
    
    for (int i = 0; i < sizeOfArr; i++) {
        if (a[i] < indexMin) {
            indexMin = a[i];
            check = i;
        }
    }
    
    indexMin = check;
    
    check = a[indexPos];
    a[indexPos] = a[indexMin];
    a[indexMin] = check;
    
    for (int i = 0; i < sizeOfArr; i++) {
        printf("%d  ", a[i]);
    }
    
    getch();
}
