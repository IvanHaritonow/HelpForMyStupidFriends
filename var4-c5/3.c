#include <stdio.h>
#include <math.h> 

int main() {
    int res;
    for(int i = 0; i <= 10; i++) {
        res = pow(3, i);
        printf("3^%d = %d\n", i, res);
    }    
    
    getch();
}
