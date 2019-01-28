#include <stdio.h>
#include <math.h> 

int main() {
    int count = 10, totalPrice;
    float cost;
    
    printf("Сколько всего денег было затрачено?\n");
    scanf("%d", &totalPrice);
    
    cost = totalPrice / count;
    printf("Стоимость товара = %d", cost);
    
    getch();
}
