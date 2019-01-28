#include <stdio.h>
#include <math.h>

int main() {
    int x;
    float y;
    
    if (x < -5)
        y = (9 * x ^ 2 + 5) / (3 * x + 15);
    else y = 3 * x ^ 2 - 8; 
        
    getch();
}
