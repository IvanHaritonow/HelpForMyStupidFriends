#include <stdio.h>

int main() {
    int Y;
    int x;
    
    if (x < 3)
        Y = (4 * x ^ 2 + 7) / (x - 3);
        
    if (x >= 3)
        Y = 3 * x ^ 2 - 2;
        
    getch();
}
