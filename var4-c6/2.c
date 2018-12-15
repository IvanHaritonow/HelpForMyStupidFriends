#include <stdio.h>
#include <stdlib.h>
int main() { 
	int i, x;
	double y;
	
         for (i = -9; i <= 9; i += 3) {
	    x = i;
	  printf("При значении х = %d", x);
	      y = 4 * x * x + 5 * x - 10;
	  printf(" функция y(x) = %d\n", y);	
   } 
  getch();
 }
