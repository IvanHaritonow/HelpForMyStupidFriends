#include <stdio.h>

int main(){
    
    int i, n;
    int a[] = {};
    
    printf("Сколько элементов будет в массиве?\n");
    scanf("%d", &n);
    printf("Введите элементы по одному\n");
    
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    
    printf("\n");
    for(i = 0; i < n; i++) printf("%d  ", a[i]);
    
    getch();
}
