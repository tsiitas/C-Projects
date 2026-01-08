#include <stdio.h>

int main(){
    int i, a[10] = {0};
    for(i = 0; i < 10; i++){
        a[i++] = 20;
    }
    for(i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
// prints: 20 0 20 0 20 0 20 0 20 0