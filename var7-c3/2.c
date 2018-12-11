#include <stdio.h>
#include <stdlib.h>

int main(){
    int y;

      printf("Введите число: ");
      scanf("%d", &y);
	  
	  if (y % 2 == 0) printf("Число чётное");
             else printf("Число нечётное");
	  
    getch();
}
