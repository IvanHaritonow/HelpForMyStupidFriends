#include <stdio.h>

int main() {
    int check = 0;
    int a[10] = {};
    
    printf("Заполните массив: \n");
    for(int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    
    for(int i = 0; i < 10; i++)
        if(a[i] % 2 != 0) check++;
    
    printf("Количество нечётных элементов в массиве: %d\n", check); 
    printf("Список нечётных элементов в массиве: \n");
    for(int i = 0; i < 10; i++)
        if(a[i] % 2 != 0) printf("%d  ", a[i]);
    
    getch();
}
