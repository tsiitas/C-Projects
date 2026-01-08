#include <stdio.h>

void myswap(char *str1, char *str2){
    char temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}


int main(){
    char str1[] = "bar";
    char str2[] = "foo";
    myswap(str1, str2);
    printf("%s %s\n", str1, str2);
    return 0;
}

// prints: far boo only tyhe first characters are swapped