#include <stdio.h>

int main() {
    
    int Sum = 0;
    
    for (int i = 100; i < 1000; i++)
        if (i % 13 == 0) Sum += i;
        
    printf("Сумма всех 3-х значный чисел, кратных 13, равна: %d", Sum);    
    getch();
}
