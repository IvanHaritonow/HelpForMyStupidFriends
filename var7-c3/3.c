#include <stdio.h>
#include <stdlib.h>

int main(){
    double x, y;

      printf("Введите первое число: ");
	  scanf("%f", &x);
	  printf("Введите второе число: ");
	  scanf("%f", &y);
	  
	  if (x >= y) printf("Большим было число %f\n", x);
        else printf("Большим было число %f\n", y);
	  
    getch();
}
