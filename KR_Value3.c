#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    clrscr();
    int a, b, angle;
	double S; 
	
	printf("Введите длину первой стороны: \n");
	scanf("%d", &a);
	printf("Введите длину второй стороны: \n");
	scanf("%d", &b);
	printf("Введите значение угла между сторонами: \n");
	scanf("%d", &angle);
	
	S = abs((a*b*sin(angle))/2);
	printf("Площадь треугольника = %f \n", S);
    return 0;
}