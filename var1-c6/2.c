#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y, i, j;
    int a[10] = {0};

    j = 1;

	   for (i = 1; i <= 20; i += 2) {
            a[j] = i;
            j++;
            printf("При значении х = %f", i);
            y = (5 * i) - 2;
            printf(" функция y(x) = %f\n", y);
	   }

    getch();
}
