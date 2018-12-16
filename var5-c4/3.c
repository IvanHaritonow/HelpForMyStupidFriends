#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, Sum = 0;
    
      for(int i = 1; i <= 4; i++) {
          printf("Введите %d-е число: ", i);
          scanf("%d", &num);
          if (num % 3 == 0) Sum += num;
      }
      
    printf("Сумма чисел, кратных 3-м = %d", Sum);
    getch();
}
