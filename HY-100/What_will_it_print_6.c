#include <stdio.h>
 struct foo{
    char a;
    float b;
 };

 struct bar{
    int a[3];
    char b;
    struct foo f;
 };
int main(){
    struct bar v = {{1,2,3},'C',{'a',3.1}};
    printf("%d. %2f", v.a[2], v.f.b);
}

// prints 3 3.100000