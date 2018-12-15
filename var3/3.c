#include <stdio.h>

int main()
{
    int a, b;
    double maxi, mini;
    printf("Введите первое число: \n");
	scanf("%d", &a);
	
	printf("Введите второе число: \n");
	scanf("%d", &b);
	
	if (a >= b) {
		maxi = a;
		mini = b;
	} else {
		maxi = b;
		mini = a;
	}
	
	maxi = 2 * a * b;
	mini = (a + b) / 2;
	
	printf("Результат: %f", maxi);
	printf(", %f", mini);
    return 0;
}
