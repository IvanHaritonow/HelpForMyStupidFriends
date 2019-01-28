#include <stdio.h>

int main() {
    int dayOfMonth, isBissextile;
    
    printf("Введите 1 если год високосный (иначе любой символ): ");
    scanf("%d", &isBissextile);
    if(isBissextile == 1 && dayOfMonth == 2) {
            printf("29");
            exit(0);
    }
    
    switch (dayOfMonth) {
    case 1: printf("31");
    break;
    case 2: printf("28");
    break;
    case 3: printf("31");
    break;
    case 4: printf("30");
    break;
    case 5: printf("31");
    break;
    case 6: printf("30");
    break;
    case 7: printf("31");
    break;
    case 8: printf("31");
    break;
    case 9: printf("30");
    break;
    case 10: printf("31");
    break;
    case 11: printf("30");
    break;
    case 12: printf("31");
    break;
    default: printf("Invalid Data");
    break;
    }
    
    getch();
}
