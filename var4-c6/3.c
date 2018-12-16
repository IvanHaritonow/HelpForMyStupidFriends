#include <stdio.h>

int main() {
    int sum = 0;
    
       for (int d = -100; d <= -28; d += 0.4) sum += d; 
      
    printf("Сумма первых 180 членов прогрессии: %d", sum);
    
    getch();
}
