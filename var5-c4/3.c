#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, num3, num4, Sum;
    Sum = 0;

    printf("Введите 1-е число: ");
    scanf("%d", &num1);
    printf("Введите 2-е число: ");
    scanf("%d", &num2);
    printf("Введите 3-е число: ");
    scanf("%d", &num3);
    printf("Введите 4-е число: ");
    scanf("%d", &num4);
    
      if(num1 % 3 == 0) Sum += num1;
      if(num2 % 3 == 0) Sum += num2;
      if(num3 % 3 == 0) Sum += num3;
      if(num4 % 3 == 0) Sum += num4;
    
    printf("Сумма чисел, кратных 3-м = %d", Sum);
    
    getch();
}
