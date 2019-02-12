#include <stdio.h>

int main(){
    
    int i;
    int a[12] = {};
    
    for(i = 0; i <= 11; i++) scanf("%d", &a[i]);
    
    printf("%d %d %d %d %d %d %d %d %d %d %d %d\n",
        a[0], a[1], a[2], a[3], a[4], a[5], 
        a[6], a[7], a[8], a[9], a[10], a[11]);
    
    getch();
}
