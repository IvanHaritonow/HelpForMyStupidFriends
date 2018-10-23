#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    clrscr();
	int min, sec;
	double Sum;
	
	printf("Введите время: минуты -> ");
	scanf("%d", &min);
	printf("секунды -> ");
	scanf("%d", &sec);
	if ((min < 0) && (sec < 0)) {
	    printf("Минуты и секунды существуют в интервале [1..60]!");
	    return 0;
	} else
	if ((min < 0) && (sec > 60)) {
	    printf("Минуты и секунды существуют в интервале [1..60]!");
	    return 0;
	} else 
	if ((min > 60) && (sec < 0)) {
	    printf("Минуты и секунды существуют в интервале [1..60]!");
	    return 0;
	} else
	if ((min > 60) && (sec > 60)) {
	    printf("Минуты и секунды существуют в интервале [1..60]!");
	    return 0;
	} else
	if(min < 0) {
		printf("Ошибка! Количество минут не может быть меньше 0 \n");
		printf("Для завершения нажмите <Enter>");
		return 0;
	} else
	if(min > 60) {
		printf("Ошибка! Количество минут не может превышать 60 \n");
		printf("Для завершения нажмите <Enter>");
		return 0;
	} else
	if(sec < 0) {
		printf("Ошибка! Количество секунд не может быть меньше 0 \n");
		printf("Для завершения нажмите <Enter>");
		return 0;
	} else
	if(sec > 60) {
		printf("Ошибка! Количество секунд не может превышать 60 \n");
		printf("Для завершения нажмите <Enter>");
		return 0;
	} else {
		Sum = (min * 60) + sec;
	}
	printf("Секунд: %f \n", Sum);
    return 0;
}