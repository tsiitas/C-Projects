#include <stdio.h>

int main(){
    int i = 0;
    do {
        int i = 10;
        printf("%d", i);
        i++;
    } while (i++ < 5);
    return 0;
}

// prints: 1010101010