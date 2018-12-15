#include <stdio.h>

int main() {
    int sum = 0;
    
      for (int d = -200; d <= -170; d += 0.2) {
          sum += d; 
      }
    printf("Сумма первых 150 членов прогрессии: %d", sum);
    
    getch();
}
