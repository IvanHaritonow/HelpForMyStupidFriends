#include <stdio.h>
#include <stdlib.h>

int main()
{
    double m, g, h, Ep;

      g = 9.8;

      printf("Введите значение массы тела m: \n");
	    scanf("%d", &m);

	    printf("Введите значение высоты h: \n");
      scanf("%d", &h);

      Ep = m * g * h;

      printf("Значение потенциальной энергии: %f", Ep);

    getch();
}
