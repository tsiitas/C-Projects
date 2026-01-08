#include <stdio.h>

int main(){
    int i = 5, *j, **k;
    j = &i;
    k = &j;
    printf("%d %d %d\n", *j, **k, *(*k));
    return 0;

}

// prints: 5 5 5
