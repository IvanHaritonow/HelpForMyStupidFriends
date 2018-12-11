#include <stdio.h>
#include <stdlib.h>

int main()
{
    double y;
    int x;

    printf("Введите x: ");
	  scanf("%d", &x);
	  
	  if (x > -8) {
          y = (5 * x * x + 2) / (x + 8);
	  } else {
	      y = (2 * x * x + 9);
	  }
      
      printf("Функция y = %f", y);
    getch();
}
