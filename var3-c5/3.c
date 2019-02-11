#include <stdio.h>
#include <math.h>

int main() {
    
    float step = 0;
    
    for (int i = 0; i <= 10; i++) {
        printf("2^%d = %1.f\n", i, pow(2.0, step));
        step++;
    }    
        
    getch();
}
