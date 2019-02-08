#include <stdio.h>

int main() {
    int x = 3;
    float y;
    y = ((5 * (x ^ 2) - 4) / (7 * x + 2));
    printf("%d", y);
    getch();
}
