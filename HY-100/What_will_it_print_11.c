#include <stdio.h>

struct foo{
    int x;
    /*static*/ int y; // <---
};

int main(){
    printf("%d", sizeof(struct foo));

    return 0;
}
// the compiler will give an error because static members are not allowed in structures (compile-time error)