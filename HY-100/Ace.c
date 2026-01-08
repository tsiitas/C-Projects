#include <stdio.h>

void f(char *s){
    if(*s !='\0' && *s != ' '){
        f(s+1);
        putchar(*s);
    }
}

int main(){
    f("Ace of Spades");
    return 0;
}

// prints ecA