#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, d, i, j;
    int a[80] = {0};

    printf("Введите первый член прогрессии: ");
    scanf("%d", &k);

    printf("Введите разность прогрессии: ");
    scanf("%d", &d);

      a[0] = k;

	     for (i = 1; i <= 79; i++) {
           a[i] = a[i - 1] + d;
	     }

	     for (i = 0; i <= 79; i++) {
           j += a[i];
	     }

     printf("Сумма первых 80 членов прогрессии: %f\n", j);

    getch();
}
