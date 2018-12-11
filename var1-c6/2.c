#include <stdio.h>
#include <stdlib.h>
int main() { 
	int i, x;
	double y;
	
for (i = 1; i <= 20; i += 2) {
	 x = i;
	  printf("При значении х = %f", x);
	 y = (5 * x) - 2;
	  printf(" функция y(x) = %f\n", y);	
   } 
  getch();
 }
