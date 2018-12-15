#include <stdio.h>

int main()
{
	clrscr();
    int a;
    printf("Введите число: \n");
	scanf("%d", &a);
	
	if (a % 2 == 0) {
	    printf("Четное");
	} else {
	    printf("Нечётное");
	}
    return 0;
}
