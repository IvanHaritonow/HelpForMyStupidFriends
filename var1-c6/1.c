#include <stdio.h>

 
#include <stdlib.h>


int main()

{

    int a, b, c, i;
    
    c = 1;

     printf("Введите количество чисел: \n");
     scanf("%d", &a);


	 for (i = 1; i <= a; i++) {
            printf("%f", i);
            printf(" число: %f");
            scanf("%d", &b);
            if (b % 2 == 0 && b < 15 && b > 0) 
            c *= b;

	 }


	 printf("Произведение этих чисел равно: %f \n", c);


    getch();

}
 
int main()
    
  
 
 
 
	
          
            
 
	   
 
	
 

 
