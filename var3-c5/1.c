#include <stdio.h>

int main() {

    for (int i = 100; i < 1000; i++)
        if (i % 7 == 0) printf("%d\n", i);
    
    getch();
}
