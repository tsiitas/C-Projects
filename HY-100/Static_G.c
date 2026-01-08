#include <stdio.h>

void f() {
    static int i = 0;
    printf("%d ", i++);
}

void g() {
    int j = 42;
    f();
    printf("%d ", j++);
    f();
}
int main(){
    g();
    g();
}

// prints: 0 42 1 2 42 3