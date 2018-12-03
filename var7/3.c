#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c, max, min, middle;

    printf("Введите a: \n");
	scanf("%d", &a);
	printf("Введите b: \n");
	scanf("%d", &b);
	printf("Введите c: \n");
	scanf("%d", &c);

	if (a >= b && a >= c) {
            max = a;
            middle = b;
            min = c;
	}
    else
	if (b >= a && b >= c) {
            max = b;
            middle = a;
            min = c;
    }
    else
	if (c >= a && c >= b) {
            max = c;
            middle = a;
            min = b;
	}

	if (middle <= min) {
        a = middle;
        middle = min;
        min = a;
	}

    printf("Минимум: %f \n", min);
    printf("Максимум: %f", max);

    return 0;
}
