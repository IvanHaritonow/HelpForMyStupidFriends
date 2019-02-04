#include <stdio.h>

int main() {
    int a[] = {5, -3, 4, -8, -9, 1, 9, 6, -3, 4, 8, 2};
    int b[] = {};
    int c[] = {};
    int sizeOfArr = 12, indexMax = -9999, maxElement = -9999;
    
    for (int i = 0; i < sizeOfArr; i++) {
        if (a[i] > maxElement) {
            maxElement = a[i];
            indexMax = i;
        }
    }
    
    for (int i = 0; i < indexMax - 1; i++)
        b[i] = a[i];
        
    for (int i = indexMax + 1; i < sizeOfArr; i++)
        c[i] = a[i];
        
    //массивы не успел отсортировать
    //возможно я сделаю это, но не факт
    //в случае если да, этот файл сам изменится, просто следи за ним
        
    getch();
}
