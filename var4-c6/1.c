#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, s;
    s = 1;
    
      for (i = -8; i < 4; i++) if (i != 0) s *= i;
    
    printf("Произведение всех чисел = %d", s);
    getch();
}
