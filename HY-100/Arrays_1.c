#include <stdio.h>

int main(){
    char *s[5] = { "For", "Whom", "the", "Bell", "Tolls" };
    int i;
    char **p = s;
    for(i = 4; i >= 0; i--){
        printf("%c%c", (*p)[4-i], (i != 0) ? ' ' : '\n');
        p++;
    }
}

// prints F h e l s