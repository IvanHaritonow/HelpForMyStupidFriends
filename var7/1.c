#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, i;
    i = 0;
    printf("Введите k: \n");
	scanf("%d", &k);

    if (k < 1 || k > 365) {
        printf("Число k введено неверно \n");
    } else {

 	while (k > i) {
     i += 7;
	}
	i -= k;
	i = 6 - i;

	switch (i) {
	case 0 : printf("понедельник"); break;
	case 1 : printf("вторник"); break;
	case 2 : printf("среда"); break;
	case 3 : printf("четверг"); break;
	case 4 : printf("пятница"); break;
	case 5 : printf("суббота"); break;
	case 6 : printf("воскресенье"); break;
	default: printf("Ошибка в программе"); break;
    }
    return 0;
}
}
