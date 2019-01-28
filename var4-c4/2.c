#include <stdio.h>

int main() {
    int a, b, c;
    
    if (a == b && a == c && b == c)
        printf("Треугольник является равносторонним");
    else printf("Треугольник НЕ является равносторонним");
    
    getch();
}
