#include <stdio.h>

int main() {
    float a = 3, b = 1.4, c = 2.7;
    
    if (a < 3.8 && a > 1.6) 
        printf("%f \n", a);
    if (b < 3.8 && b > 1.6) 
        printf("%f \n", b);
    if (c < 3.8 && c > 1.6) 
        printf("%f \n", c);
    
    getch();
}
