#include <stdio.h>
#include <string.h>

void f(char s[]){
    int i, j;
    char c;
    for(i = 0, j = strlen(s) - 1; i < j; i++, j--){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

int main(){
    char s[] = "Hello, World!";
    f(s);
    printf("Output: %s", s);
    return 0;
}

// prints the string given in reverse order

