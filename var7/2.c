#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c;

    printf("Введите a: \n");
	scanf("%d", &a);
	printf("Введите b: \n");
	scanf("%d", &b);
	printf("Введите c: \n");
	scanf("%d", &c);

	if (a >= 0) a *= a;
	if (b >= 0) b *= b;
	if (c >= 0) c *= c;

    printf("%f", a);
    printf("  %f", b);
    printf("  %f", c);

    return 0;
}
