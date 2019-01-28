#include <stdio.h>

int main() {
    int Sum = 0;
    
    for(int i = 100; i < 1000; i++){
        if (i % 17 == 0)
            Sum += i;
    }
    
    printf("Сумма этих чисел = %d", Sum);
    getch();
}
