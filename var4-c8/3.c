#include <stdio.h>

int main(){
    
    int even = 2;
    int res;
    int a[9] = {};
    
    for(int i = 0; i <= 8; i++){
        res = even;
            if(i % 2 == 0) res *= -1;
        a[i] = res;
        even += 2;
    }
    
    // for(int i = 0; i <= 8; i++){
    //     printf("%d ", a[i]);
    // }
    
    getch();
}
