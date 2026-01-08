#include <stdio.h>

void main(){
    int s[6] = {2,4,5,0,3,1};
    int i,j;

    j = 0;
    for(i = 0; i <= 10; i++){
        printf("%d ", s[j]);
        j = s[j];
    }
}
// prints: 2 5 1 4 3 0 2 5 1 4 3