#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    clrscr();
    int x;
    double y;
    printf("Введите значение x \n");
    scanf("%d", &x);
    y = cos((x/4)*(x/4)) - sin((x+y)*(x+y));
    printf("Значение Y = %f \n", y);
    return 0;
}
