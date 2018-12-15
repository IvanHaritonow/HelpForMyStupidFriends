#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Enter a: ");
    scanf("%d/n", &a);
    printf("Enter b: ");
    scanf("%d/n", &b);
    printf("Enter c: ");
    scanf("%d/n", &c);
    
    if (a + b >= c || a + c >= b || b + c >= a) 
         printf("false"); else printf("true");
        
    getch();
}
