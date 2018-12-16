#include <stdio.h>
#include <stdlib.h>

int main() {
    int year, check;
    
    printf("Введите год: ");
    scanf("%d", &year);
    
        if (year % 400 == 0) check = 1; else
        if (year % 100 == 0) check = 0; else
        if (year % 4 == 0) check = 1; else
            check = 0;
        
        if (check == 1) printf("%d-й год является високосным", year); 
            else printf("%d-й год не является високосным", year);
         
    getch();
}
