#include <stdio.h>

int main() {
    int anyNum = 10;
    
    if (5 % anyNum == 0)
        printf("Число является делителем числа 5");
    else printf ("Число НЕ является делителем числа 5");   
    
    getch();
}
