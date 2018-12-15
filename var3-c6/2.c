#include <stdio.h>

int main() {
    int y;
    
      for (int x = -5; x <= 5; x += 2) {
          y = 5 * x * x - 2 * x + 1;
          printf("x = %d    y = %d\n", x, y);
      }
    
    getch();
}
