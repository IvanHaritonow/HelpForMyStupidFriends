#include <stdio.h>
#include <stdlib.h>

int main(){
    float x, y;

      printf("Введите первое число: ");
	  scanf("%f", &x);
	  printf("Введите второе число: ");
	  scanf("%f", &y);
	  
	    if (x >= y) printf("Большим было число %.3f\n", x);
          else printf("Большим было число %.3f\n", y);
	  
    getch();
}
