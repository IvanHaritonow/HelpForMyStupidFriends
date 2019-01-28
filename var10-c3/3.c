#include <stdio.h>
#include <stdlib.h> 

int main() {
    int max;
    float maximum, min;
    
    if (min > max) {
        max += min;
        min = max - min;
        max -= min;
    }
    
    maximum = max;
    max += abs(min);
    min = abs((maximum - min) / 2);
    
    printf("%d  %f", max, min);
    getch();
}
