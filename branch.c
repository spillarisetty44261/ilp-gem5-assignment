#include <stdio.h>

int main() {
    volatile int x = 0;
    for(int i = 0; i < 5000000; i++) {
        if(i % 2 == 0)
            x++;
        else
            x--;
    }
    printf("%d\n", x);
    return 0;
}
