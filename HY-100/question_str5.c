#include <stdio.h>

int main(){
    char str[] = "question";
    str[5] = '\0';

    printf("%s\n", str);}

    // prints "quest"