#include <stdio.h>

int main() {
    int v, m;
    float p;
    
    printf("Масса: ");
    scanf("%d", &m);
    printf("Объём: ");
    scanf("%d", &v);
    
    p = m / v;
    printf("Плотность = %f", p);
    
    getch();
}
