#include <stdio.h>
#include <stdlib.h>
int main() { 
	int x;
	double y;
	
         for (x = -9; x <= 9; x += 3) {
	     printf("При значении х = %d", x);
	        y = 4 * x * x + 5 * x - 10;
	     printf(" функция y(x) = %.0f\n", y);	
         } 
  getch();
 }
