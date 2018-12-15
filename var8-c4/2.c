#include <stdio.h>
#include <stdlib.h>

int maxOf(int a, int b, int c) {
    int max;
    if (a >= b) max = a;
       else max = b;
    if (max <= c) max = c;
    return max;
}

int minOf(int a, int b, int c) {
    int min;
    if (a <= b) min = a;
       else min = b;
    if (min >= c) min = c;
    return min;
}

int main() {
    int a, b, c, sum;
    printf("Введите a: ");
    scanf("%d/n", &a);
    printf("Введите b: ");
    scanf("%d/n", &b);
    printf("Введите c: ");
    scanf("%d/n", &c);
    
    sum = a + b + c;
    a = maxOf(a, b, c);
    c = minOf(a, b, c);
    b = sum - a - c;
    
    if (a + b > c && a - b < c) 
         printf("Треуголник существует"); else printf("Треуголник не существует");
        
    getch();
}
