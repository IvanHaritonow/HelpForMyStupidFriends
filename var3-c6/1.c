#include <stdio.h>

int main() {
    int n = 1;
      for (int i = -6; i < 5; i++) {
          if (i != 0) n *= i;
      }
     printf("%d", n);
    getch();
}
