#include <stdio.h>

void mix(int *pt1, int *ptr2, int x);

int main(){
    int i = 1, j = 2, k = 3;
    mix(&i, &j, k);
    printf("%d %d %d\n", i, j, k);
}

void mix(int *ptr1, int *ptr2, int x){
    ptr1 = ptr2;
    *ptr1 = 100;
    *ptr2 = 200;
    x = (*ptr1) + (*ptr2);
    printf("%d\n", x);
}
// prints 400 
//        1 200 3