#include <stdio.h>

int main() {
    float a = 10, b = 13, c = 13;
    
    if (a == b || a == c || b == c)
        printf("имеются");
    else printf("НЕ имеются");
    
    getch();
}
