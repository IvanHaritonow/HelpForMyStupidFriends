#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, i, j;
    int a[10] = {0};
    k = 1;

     printf("Введите 10 чисел \n");

	   for (i = 0; i <= 9; i++) {
            scanf("%d", &j);
            a[i] = j;
            if (a[i] % 2 == 0 && a[i] < 15 && a[i] > 0) k *= a[i];
	   }

	 printf("Произведение этих чисел равно: %f \n", k);

    return 0;
}
