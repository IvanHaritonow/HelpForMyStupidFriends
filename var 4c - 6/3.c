#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, d, a, i;
    
    //k = 10;
    printf("Введите первый член прогрессии: ");
    scanf("%d", &k);
    
    //d = 3;
    printf("Введите разность прогрессии: ");
    scanf("%d", &d);

      a = k;

	     for (i = 2; i <= 280; i++) {
                a += d;
	     }

     printf("Сумма первых 180 членов прогрессии: %f\n", a);

    getch();
}
