#include <stdio.h>

int main() {
    int a, b, c, d, i = 0;
    
    if(a % 2 == 0)
        i++;
    if(b % 2 == 0)
        i++;
    if(c % 2 == 0)
        i++;
    if(d % 2 == 0)
        i++;    
    
    printf("Из 4-х чисел %d нечетн.", i);    
    getch();
}
