#include <stdio.h>
#include <conio.h>
int main()
{
    clrscr();
    int x;
    double y;
        
        printf("Введите x: \n");
        scanf("%d", &x);
        
        if (x > -6) {
           y = (8 * x * x + 5) / (x + 6);
        } 
        else {
            y = (7 * x * x + 3);
        }
        printf("Результат функции: %f \n", y);
    return 0;
}
