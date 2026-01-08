#include <stdio.h>

int f(int);
int g(int);


int main(){
    for(int i = 0; i < 4; i++){
        f(g(10-i));
    }
}

int g(int i){
    static int x = 0;
    printf("x = %d, i = %d\n", x, i);
    return x++;
}

int f(int y){
    printf("y = %d\n", y);
}

// Output:
// x = 0, i = 10
// y = 0
// x = 1, i = 9
// y = 1
// x = 2, i = 8
// y = 2
// x = 3, i = 7
// y = 3