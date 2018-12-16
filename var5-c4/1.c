#include <stdio.h>
#include <stdlib.h>

int main() {
    int suit;
    
    printf("Введите число от 1 до 4: ");
    scanf("%d", &suit);
    
       if (suit == 1) printf ("пики"); else
       if (suit == 2) printf ("трефы"); else
       if (suit == 3) printf ("бубны"); else
       if (suit == 4) printf ("червы"); else
         printf("Введённое число должно быть от 1 до 4");
         
    getch();
}
