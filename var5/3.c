#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double y;
    int z, a;

      printf("z = : ");
	  scanf("%d", &z);

	  printf("a = : ");
      scanf("%d", &a);

      y = sqrt(z + a);

      printf("y = %f", y);

    getch();
}
